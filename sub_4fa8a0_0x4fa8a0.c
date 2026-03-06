// 函数名称: sub_4fa8a0
// 虚拟地址: 0x4fa8a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_4fa8a0(int32_t arg1, int32_t arg2, float arg3)
{
    // 第一条实际指令: int32_t* eax_1 = sub_4f4890(*(sub_4fc3d0(&data_be1cb8, arg1) + 4))
    int32_t* eax_1 = sub_4f4890(*(sub_4fc3d0(&data_be1cb8, arg1) + 4))
    float i = 0f
    int32_t* var_c = eax_1
    
    if (eax_1[1] s<= 0)
        return 
    
    int32_t var_8_1 = 0
    int32_t* edi_1 = 0x30
    
    do
        if (*(*eax_1 + var_8_1 + 4) == 6)
            int32_t var_1c_1 = arg2
            sub_4fa4e0(arg1, i, var_8_1.b)
            int32_t eax_4
            int32_t ecx_2
            eax_4, ecx_2 = sub_4fc3d0(&data_be1cb8, arg1)
            
            if (edi_1 s>= 0x430)
                sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                    "UIStateElementGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t edx_2 = *(edi_1 + eax_4)
            int128_t* eax_5
            
            if (edx_2 != 0)
                eax_5 = sub_4fc1e0(ecx_2, edx_2)
            else
                eax_5 = sub_4fc0d0()
                *(eax_5 + 4) = &data_83f3d3
                *(edi_1 + eax_4) = *(eax_5 + 0x1bc)
            
            long double x87_r7_1 = float.t(0)
            int128_t* ecx_4 = eax_5
            long double x87_r6_1 = fconvert.t(arg3)
            x87_r6_1 - x87_r7_1
            eax_5.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
                | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3000
            eax_1 = var_c
            
            if ((eax_5:1.b & 1) == 0)
                *(ecx_4 + 0x14) = fconvert.s(x87_r7_1)
                ecx_4[1].d = fconvert.s(x87_r7_1)
        
        var_8_1 += 0x118
        i += 1
        edi_1 = &edi_1[1]
    while (i s< eax_1[1])
}
