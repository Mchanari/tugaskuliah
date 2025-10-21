# Basis pengetahuan
rules = [
    (["komputer_tidak_nyala", "tombol_power_berfungsi"], "cek_suplai_daya"),
    (["cek_suplai_daya", "kabel_terpasang_baik"], "kemungkinan_psu_rusak"),
    (["komputer_tidak_nyala", "ada_beep"], "masalah_ram"),
    (["komputer_nyala_tapi_tidak_tampil", "monitor_nyala"], "masalah_vga"),
    (["masalah_ram", "ram_terpasang_baik"], "bersihkan_kontak_ram"),
    (["masalah_vga", "vga_terintegrasi"], "update_driver")
]

# Fakta awal
facts = {
    "komputer_tidak_nyala": True,
    "tombol_power_berfungsi": True,
    "kabel_terpasang_baik": True,
    "ada_beep": False,
    "komputer_nyala_tapi_tidak_tampil": False,
    "monitor_nyala": False,
    "ram_terpasang_baik": True,
    "vga_terintegrasi": True
}

def backward_chaining(goal, rules, facts):
    if goal in facts and facts[goal]:
        print(f"[] {goal} sudah diketahui benar.")
        return True

    for antecedents, consequent in rules:
        if consequent == goal:
            print(f"[?] Mencoba buktikan: {goal} melalui aturan {antecedents} - {goal}")
            if all(backward_chaining(a, rules, facts) for a in antecedents):
                facts[goal] = True
                print(f"[+] {goal} terbukti benar melalui {antecedents}")
                return True

    print(f"[-] {goal} tidak dapat dibuktikan.")
    return False

print("\n=== BACKWARD CHAINING ===")
goal = "kemungkinan_psu_rusak"
result = backward_chaining(goal, rules, facts)
print(f"\nHasil pembuktian '{goal}':", result)