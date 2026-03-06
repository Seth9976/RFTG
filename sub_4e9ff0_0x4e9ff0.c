// 函数名称: sub_4e9ff0
// 虚拟地址: 0x4e9ff0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4e9ff0(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax = 0
    int32_t eax = 0
    int32_t i = 0
    int32_t var_10 = 0
    int32_t var_c = 0
    int32_t* entry_ebx
    
    if (entry_ebx[1] s> 0)
        int32_t var_8_1 = 0
        
        do
            void* eax_2 = *entry_ebx + var_8_1
            int32_t eax_3
            
            if (arg2 == 4)
                eax_3 = *(eax_2 + 0x20)
            else if (arg2 == 5)
                eax_3 = *(eax_2 + 0x24)
            else if (arg2 != 6)
                if (arg2 != 7)
                    sub_4c5870("Halt", &data_83f3d3, "Flanim.cpp", 0x55b, "FlanimCompressGetInt")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                eax_3 = *(eax_2 + 0x2c)
            else
                eax_3 = sub_4e99c0(arg1, *(eax_2 + 0x28))
            
            if (i == 0 || var_10 != eax_3)
                var_c += 1
                var_10 = eax_3
            
            var_8_1 += 0x30
            i += 1
        while (i s< entry_ebx[1])
        
        eax = var_c
    
    return eax * 6
}
