// 函数名称: sub_551c60
// 虚拟地址: 0x551c60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_551c60(int32_t arg1, int32_t arg2, int32_t arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t ebx = arg2 + arg3
    int32_t var_b4 = 0
    int32_t var_a4 = 0
    int32_t var_14 = arg2
    int32_t var_1c = arg2
    int32_t var_18 = ebx
    int32_t var_1c_1 = arg2
    int32_t var_18_1 = ebx
    float* var_f4_4
    uint32_t var_c4[0x4]
    int32_t var_dc
    int32_t var_d8
    float* var_c8
    
    if (sub_59fa50(&var_c4) == 0)
        int32_t var_b4_2 = 0
        int32_t var_a4_2 = 0
        float* eax_17 = sub_595730(&var_c8, &var_dc, &var_c4, &var_dc, &var_d8)
        
        if (eax_17 == 0)
            sub_4c5870("sourceSpec.pImage", &data_83f3d3, "TextureImport.cpp", 0x34e, 
                "TextureLoadWithSTB")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        float* eax_19 = var_c8
        void* esi_4
        
        if (eax_19 != 4)
            if (eax_19 != 3)
                sub_4c5870("Halt", &data_83f3d3, "TextureImport.cpp", 0x36c, "TextureLoadWithSTB")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            esi_4 = 0x14
        else
            esi_4 = eax_19 - 2
        
        void* var_d0_1 = esi_4
        int32_t var_d4_1 = sub_5540b0(esi_4, var_dc)
        sub_554750(arg4)
        var_f4_4 = eax_17
    else
        int32_t var_b4_1 = 0
        int32_t var_a4_1 = 0
        int32_t var_1c_2 = arg2
        int32_t esi_2
        int32_t var_cc
        
        if (sub_59fa50(&var_c4) == 0)
            uint32_t eax_8
            int32_t edx_3
            eax_8, edx_3 = sub_595730(&var_cc, &var_d8, &var_c4, &var_dc, &var_d8)
            
            if (eax_8 == 0)
                data_273ac1c = "unknown image type"
                var_c8 = nullptr
                esi_2 = var_cc
            else
                esi_2 = var_cc
                int32_t ecx_2 = var_d8
                int32_t var_f4_2 = esi_2
                int32_t var_f8_2 = ecx_2
                var_c8 = sub_595f00(var_dc, edx_3, ecx_2, eax_8)
        else
            var_c8 = sub_59fde0(&var_dc, &var_cc, &var_d8, &var_c4, &var_dc)
            esi_2 = var_cc
        float* eax_11 = var_c8
        float* var_e0 = eax_11
        
        if (eax_11 == 0)
            sub_4c5870("sourceSpec.pImage", &data_83f3d3, "TextureImport.cpp", 0x32d, 
                "TextureLoadWithSTB")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t esi_3
        
        if (esi_2 == 4)
            esi_3 = 0x74
        else if (esi_2 != 3)
            if (esi_2 != 1)
                sub_4c5870("Halt", &data_83f3d3, "TextureImport.cpp", 0x33d, "TextureLoadWithSTB")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            esi_3 = 0x72
        else
            esi_3 = 0x3e8
        
        int32_t var_d0 = esi_3
        int32_t var_d4 = sub_5540b0(esi_3, var_dc)
        sub_554750(arg4)
        var_f4_4 = var_c8
    __free_base(var_f4_4)
    int32_t result
    result.b = 1
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return result
}
