// 函数名称: sub_581af0
// 虚拟地址: 0x581af0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

LRESULT __fastcallsub_581af0(int32_t* arg1)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t* esi = arg1
    int32_t* var_110 = esi
    void var_10c
    sub_5abfc0(&var_10c, 0, 0x104)
    *(data_26a6554 + 0x14)
    char* const edi = &data_83f3d3
    WPARAM eax_2
    int32_t ecx_1
    int32_t edx_1
    eax_2, ecx_1, edx_1 = sub_57eb10(*esi)
    
    if (eax_2 == 0xffffffff)
        char* eax_3 = *esi
        int128_t** lParam = _calloc(eax_3, edx_1, ecx_1, 1, 0x1c)
        lParam[5] = 0x63
        *lParam = sub_57ca20(eax_3)
        lParam[1] = sub_57ca20(&data_83f3d3)
        lParam[4] = sub_57ca20(&data_83f3d3)
        lParam[2] = sub_57ca20(&data_83f3d3)
        lParam[3] = sub_57ca20(&data_83f3d3)
        lParam[6] = 1
        SendMessageA(*(data_26a6554 + 0x14), 0x180, 0, lParam)
    
    switch (esi[5])
        case 0, 1, 2, 3, 7
            edi = esi[4]
        case 4
            uint32_t var_124_2 = zx.d(*(esi + 0x12))
            uint32_t var_128_1 = zx.d(*(esi + 0x11))
            uint32_t var_12c_1 = zx.d(esi[4].b)
            _swprintf(&var_10c, 0x104, "%d,%d,%d")
            edi = &var_10c
        case 5
            sub_57e6c0(esi[4])
            esi = var_110
            edi = &data_31601c8
        case 6
            sub_57e800(esi[4])
            void* edx_4 = esi[4]
            esi[2] = 0x31602e0
            edi = *(edx_4 + 4)
        case 8
            if (esi[4] == 0)
                edi = &data_8951dc
            else
                edi = &data_8954cc
        case 9
            uint32_t var_124_3 = zx.d(esi[4].b)
            uint32_t var_128_2 = zx.d(*(esi + 0x11))
            uint32_t var_12c_2 = zx.d(*(esi + 0x12))
            uint32_t var_130_2 = zx.d(*(esi + 0x13))
            _swprintf(&var_10c, 0x104, "%d.%d.%d.%d")
            edi = &var_10c
        case 0xa
            GetDateFormatA(0x400, 1, esi[4], nullptr, &var_10c, 0x104)
            edi = &var_10c
        case 0xb
            char const* const var_12c_3 = "hh':'mm':'ss tt"
            GetTimeFormatA(0x400, 0, esi[4], "hh':'mm':'ss tt", &var_10c, 0x104)
            edi = &var_10c
        case 0xc
            GetDateFormatA(0x400, 1, esi[4], nullptr, &var_10c, 0x104)
            void* edi_1 = &var_110:3
            char i
            
            do
                i = *(edi_1 + 1)
                edi_1 += 1
            while (i != 0)
            void* eax_17 = &var_10c
            *edi_1 = 0x20
            char i_1
            
            do
                i_1 = *eax_17
                eax_17 += 1
            while (i_1 != 0)
            void var_10b
            int32_t eax_18 = eax_17 - &var_10b
            char const* const var_12c_4 = "hh':'mm':'ss tt"
            GetTimeFormatA(0x400, 0, esi[4], "hh':'mm':'ss tt", &__saved_ebp + eax_18 - 0x108, 
                0x104 - eax_18)
            edi = &var_10c
        case 0x63
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return 0xfffffffe
    
    esi[2]
    int128_t** lParam_1 = sub_57caf0(esi[5], *esi, esi[1], edi, esi[3])
    LRESULT result = SendMessageA(*(data_26a6554 + 0x18), 0x180, 0, lParam_1)
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
