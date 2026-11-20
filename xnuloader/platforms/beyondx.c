static const struct platform platform_beyondx = {
    /*
     * Samsung Galaxy S10 5G (beyondx), Exynos 9820, bajo Mu-Silicium UEFI.
     * Valores de MemoryMapLib.c: GICD 0x10101000, GICC 0x10102000, FB 0xCA000000.
     */
    .name = "beyondx", .io_base = 0x10000000, .io_size = 0x10000000,
    .gic_dist = 0x10101000, .gic_cpu = 0x10102000, .uart = 0,
    /* Exynos 9820: 4x Cortex-A55 (0x000-0x003), 2x Cortex-A75 (0x100-0x101), 2x M4 (0x200-0x201) */
    .cores = 8, .core_mpidr = (const uint32_t[]){ 0x000, 0x001, 0x002, 0x003, 0x100, 0x101, 0x200, 0x201 },
    .small_cores = 0x0f,
    .timer_hz = 26000000,
    .fb_base = 0xCA000000,
    .vol_down_reg = 0, .vol_down_bit = 0,
    .ram_log = 0xEB30C000, .ram_log_size = 0x4000,
    .ram_dump = 0xEB308000, .ram_dump_size = 0x4000,
    .log_other_cpu = 0,
    .recovery_pmu = 0,
};
