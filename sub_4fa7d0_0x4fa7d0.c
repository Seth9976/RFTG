// 函数名称: sub_4fa7d0
// 虚拟地址: 0x4fa7d0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4fa7d0(int32_t arg1, char arg2)
{
    // 第一条实际指令: int32_t* eax_1 = sub_4f4890(*(sub_4fc3d0(&data_be1cb8, arg1) + 4))
    int32_t* eax_1 = sub_4f4890(*(sub_4fc3d0(&data_be1cb8, arg1) + 4))
    int32_t i = 0
    int32_t i_1 = 0
    
    if (eax_1[1] s> 0)
        int32_t var_8_1 = 0
        int32_t* edi_1 = 0x30
        
        do
            if (*(*eax_1 + var_8_1 + 4) == 5)
                int32_t eax_3
                int32_t ecx_2
                eax_3, ecx_2 = sub_4fc3d0(&data_be1cb8, arg1)
                
                if (edi_1 s>= 0x430)
                    sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                        "UIStateElementGet")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t edx_1 = *(edi_1 + eax_3)
                int128_t* eax_4
                
                if (edx_1 != 0)
                    eax_4 = sub_4fc1e0(ecx_2, edx_1)
                else
                    eax_4 = sub_4fc0d0()
                    *(eax_4 + 4) = &data_83f3d3
                    *(edi_1 + eax_3) = *(eax_4 + 0x1bc)
                
                *(eax_4 + 0x22) = arg2
            
            var_8_1 += 0x118
            i = i_1 + 1
            edi_1 = &edi_1[1]
            i_1 = i
        while (i s< eax_1[1])
    
    return i
}
