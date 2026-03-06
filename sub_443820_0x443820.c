// 函数名称: sub_443820
// 虚拟地址: 0x443820
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_443820(int32_t arg1 @ esi)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_690aae
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_14 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t eax_3 = data_31652b0
    
    if ((eax_3.b & 1) == 0)
        int32_t ecx_1 = data_307c6f8
        eax_3 |= 1
        data_31652b0 = eax_3
        data_31652ac = ecx_1
    
    if ((eax_3.b & 2) == 0)
        data_31652b0 = eax_3 | 2
        int32_t var_8_1 = 0
        data_315fbf8 = sub_4f5220(data_31652ac, "btn_devmil")
        int32_t* eax_6 = data_31652ac
        data_315fbfc = "Development with +1 or +2 military"
        int32_t eax_7 = sub_4f5220(eax_6, "btn_halomil")
        int32_t* ecx_2 = data_31652ac
        data_315fc00 = eax_7
        data_315fc04 = "Windfall world with 1 or 2 defense"
        int32_t eax_8 = sub_4f5220(ecx_2, "btn_haloreg")
        int32_t* edx_2 = data_31652ac
        data_315fc08 = eax_8
        data_315fc0c = "Windfall world with 1 or 2 cost"
        data_315fc10 = sub_4f5220(edx_2, "btn_genes")
        int32_t* eax_10 = data_31652ac
        data_315fc14 = "Chromosome world"
        int32_t eax_11 = sub_4f5220(eax_10, "btn_alien")
        int32_t* ecx_3 = data_31652ac
        data_315fc18 = eax_11
        data_315fc1c = "Alien world"
        int32_t eax_12 = sub_4f5220(ecx_3, "btn_consume")
        int32_t* edx_3 = data_31652ac
        data_315fc20 = eax_12
        data_315fc24 = "Card that can consume at least 2 goods"
        data_315fc28 = sub_4f5220(edx_3, "btn_fivemil")
        int32_t* eax_14 = data_31652ac
        data_315fc2c = "World with 5 or more defense"
        int32_t eax_15 = sub_4f5220(eax_14, "btn_sixdev")
        int32_t* ecx_4 = data_31652ac
        data_315fc30 = eax_15
        data_315fc34 = "6 cost development"
        data_315fc38 = sub_4f5220(ecx_4, "btn_takeover")
        data_315fc3c = "Card with a takeover power"
        int32_t var_8_2 = 0xffffffff
    
    if (arg1 s>= 0 && arg1 s<= 8)
        fsbase->NtTib.ExceptionList = ExceptionList
        return &(&data_315fbf8)[arg1 * 2]
    
    sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x40be, "UISearchButtonFromIdx")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
