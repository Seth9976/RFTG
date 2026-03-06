// 函数名称: sub_5c9220
// 虚拟地址: 0x5c9220
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5c9220(int32_t* arg1, void* arg2 @ esi)
{
    // 第一条实际指令: int32_t var_18
    int32_t var_18
    int32_t __saved_edi_5
    int32_t __saved_ebx_4
    int32_t var_c
    int32_t var_8
    
    if (arg1 == 0)
        int32_t __saved_edi_6 = *(arg2 + 0x14)
        int32_t __saved_ebx_5 = *(arg2 + 0x18)
        var_18 = *(arg2 + 0x10)
        __saved_edi_5 = __saved_edi_6
        __saved_ebx_4 = __saved_ebx_5
        var_c = *(arg2 + 0x1c)
        var_8 = *(arg2 + 0x20)
    else
        int32_t ecx = *arg1
        int32_t __saved_edi_7 = arg1[1]
        int32_t ebx_1 = arg1[3]
        int32_t __saved_ebx_6 = arg1[2]
        int32_t eax = arg1[4]
        var_18 = ecx
        __saved_edi_5 = __saved_edi_7
        __saved_ebx_4 = __saved_ebx_6
        var_c = ebx_1
        var_8 = eax
        
        if (ecx == 0)
            var_18 = *(arg2 + 0x24)
        
        if (__saved_edi_7 == 0)
            __saved_edi_5 = *(arg2 + 0x28)
        
        if (__saved_ebx_6 == 0)
            __saved_ebx_4 = *(arg2 + 0x2c)
        
        if (ebx_1 == 0)
            var_c = *(arg2 + 0x30)
        
        if (sub_5c90a0(arg2, &var_18, &var_18) == 0)
            int32_t __saved_ebx_2 = __saved_ebx_4
            int32_t __saved_edi_2 = __saved_edi_5
            sub_5cce60("No video mode large enough for %dx%d")
            return 0xffffffff
    
    int32_t ecx_5 = *(arg2 + 0x2c)
    int32_t eax_5 = *(arg2 + 0x28)
    int32_t var_2c = *(arg2 + 0x24)
    int32_t var_24 = ecx_5
    int32_t var_20 = *(arg2 + 0x30)
    int32_t var_28 = eax_5
    int32_t var_1c = *(arg2 + 0x34)
    
    if (sub_5cd130(&var_18, &var_2c, 0x14) != 0)
        void* ecx_6 = data_bed820
        int32_t eax_8 = *(ecx_6 + 0x14)
        
        if (eax_8 == 0)
            sub_5cce60("Video driver doesn't support changing display mode")
            return 0xffffffff
        
        if (eax_8(ecx_6, arg2, &var_18) s< 0)
            return 0xffffffff
        
        *(arg2 + 0x24) = var_18
        *(arg2 + 0x28) = __saved_edi_5
        *(arg2 + 0x2c) = __saved_ebx_4
        *(arg2 + 0x30) = var_c
        *(arg2 + 0x34) = var_8
    
    return 0
}
