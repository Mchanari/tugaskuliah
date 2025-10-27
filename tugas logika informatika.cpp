#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
#include <set>

//--- 1. definition of data structure ---

struct Rule {
    std::vector<std::string> antecedents;
    std::string consequent;
};

// Alias type for convenience
using RuleBase = std::vector<Rule>;
using FactBase = std::unordered_set<std::string>;

//--- 2. Inference Engine ---

/**
 * @brief Running the forward-chaining inference engine
 * @param rules
 * @param facts 
 */ 
void runInferenceEngine(const RuleBase& rules, FactBase& facts) {
    bool newFactAdded = true;
    while (newFactAdded) {
        newFactAdded = false;

        // Check each rule in the RuleBase
        for (const auto& rule : rules) {
            bool allAntecedentsMet = true;

            // Check whether all the conditions (antecedents) for this rule are met.
            for (const auto& antecedent : rule.antecedents) {
                if (facts.find(antecedent) == facts.end()) {
                    // If even one condition is not met, this rule cannot be executed.
                    allAntecedentsMet = false;
                    break; 
                }
            }

            // If all conditions are met AND the result is (consequential)
            if (allAntecedentsMet & facts.find(rule.consequent) == facts.end())
                facts.insert(rule.consequent);
                newFactAdded = true;
                std::cout << "[Inference]: triggered rules -> added facts: " 
                          << rule.consequent << std::endl;
            }
        }
    }

//--- 3. Helper Functions and Main Programs ---

// Helper function for asking questions (Yes/No)
bool askQuestion(const std::string& question) {
    char response;
    std::cout << question << " (y/n): ";
    std::cin >> response;
    return (response == 'y' || response == 'Y');
}

int main() {
    RuleBase rules = {
        {{"komputer_tidak_nyala", "tombol_power_berfungsi"}, "cek_suplai_daya"},
        {{"cek_suplai_daya", "kabel_terpasang_baik"}, "kemungkinan_psu_rusak"},
        {{"komputer_tidak_nyala", "ada_beep"}, "masalah_ram"},
        {{"komputer_nyala_tapi_tidak_tampil", "monitor_nyala"}, "masalah_vga"},
        {{"masalah_ram", "ram_terpasang_baik"}, "bersihkan_kontak_ram"},
        {{"masalah_vga", "vga_terintegrasi"}, "update_driver"}
    };

    // --- Fact Base ---
    FactBase facts;
    std::cout << "--- Sistem Diagnosis Kerusakan Komputer ---" << std::endl;
    std::cout << "Jawab pertanyaan berikut dengan 'y' (yes) atau 'n' (no).\n" << std::endl;
    if (askQuestion("Apakah komputer tidak mau nyala sama sekali?")) {
        facts.insert("komputer_tidak_nyala");
    }
    if (askQuestion("Apakah tombol power berfungsi (lampu/kipas ada respon)?")) {
        facts.insert("tombol_power_berfungsi");
    }
    if (askQuestion("Apakah semua kabel (power, monitor, dll) terpasang baik?")) {
        facts.insert("kabel_terpasang_baik");
    }
    if (askQuestion("Apakah ada bunyi beep saat dinyalakan?")) {
        facts.insert("ada_beep");
    }
    }
    if (askQuestion("Apakah komputer nyala tapi tidak ada tampilan di monitor?")) {
        facts.insert("komputer_nyala_tapi_tidak_tampil");
    }
    if (askQuestion("Apakah monitor sudah pasti nyala (lampu power monitor on)?")) {
        facts.insert("monitor_nyala");
    }
    if (askQuestion("Apakah RAM sudah terpasang baik (tidak kendor)?")) {
        facts.insert("ram_terpasang_baik");
    }
    if (askQuestion("Apakah VGA yang digunakan adalah VGA terintegrasi (onboard)?")) {
        facts.insert("vga_terintegrasi");
    }

    std::cout << "\n--- Initial facts gathered ---" << std::endl;
    // Use std::set to display sorted facts
    std::set<std::string> sortedFacts(facts.begin(), facts.end());
    for (const auto& fact : sortedFacts) {
        std::cout << "- " << fact << std::endl;
    }

    std::cout << "\n--- running the inference engine... ---" << std::endl;
    runInferenceEngine(rules, facts);

    // --- Display diagnosis results ---
    std::cout << "\n--- Diagnosis results ---" << std::endl;
    bool foundConclusion = false;
    for (const auto& fact : facts) 
        if (conclusions.count(fact)) 
            std::cout << "CONCLUSION": " << fact << std::endl;
            foundConclusion = true;
    if (!foundConclusion) {
        std::cout << "No definitive diagnosis can be found "
                  << "based on the available facts" << std::endl;
    }
    return 0;
}
