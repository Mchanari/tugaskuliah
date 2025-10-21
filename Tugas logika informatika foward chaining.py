rules = [ (["komputer_tidak_nyala", "tombol_power_berfungsi"], "cek_suplai_daya"), (["cek_suplai_daya", "kabel_terpasang_baik"], "kemungkinan_psu_rusak"),
    (["komputer_tidak_nyala", "ada_beep"], "masalah_ram"), (["komputer_nyala_tapi_tidak_tampil", "monitor_nyala"], "masalah_vga"),
    (["masalah_ram", "ram_terpasang_baik"], "bersihkan_kontak_ram"), (["masalah_vga", "vga_terintegrasi"], "update_driver") ]

facts = {"komputer_tidak_nyala": True,
    "tombol_power_berfungsi": True,
    "kabel_terpasang_baik": True,
    "ada_beep": False,
    "komputer_nyala_tapi_tidak_tampil": False,
    "monitor_nyala": False,
    "ram_terpasang_baik": True,
    "vga_terintegrasi": True }

def forward_chaining(rules, facts):
    inferred = set()
    new_fact_added = True

    while new_fact_added:
        new_fact_added = False
        for antecedents, consequent in rules:
            if all(facts.get(a, False) for a in antecedents) and consequent not in facts:
                facts[consequent] = True
                inferred.add(consequent)
                print(f"Aturan terpenuhi: {antecedents} - {consequent}")
                new_fact_added = True
    return inferred

print("=== FORWARD CHAINING ===")
hasil_fc = forward_chaining(rules, facts)

print("\nFakta akhir:", facts)
