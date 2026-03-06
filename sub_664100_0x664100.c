// 函数名称: sub_664100
// 虚拟地址: 0x664100
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_664100(void* arg1, char* arg2)
{
    // 第一条实际指令: char* eax = nullptr
    char* eax = nullptr
    
    if (arg1 != 0)
        if (*arg2 == 0x23)
            eax = 1
            
            while (*(eax + arg2) != 0x20)
                if (*(eax + arg2 + 1) == 0x20)
                    eax = &eax[1]
                    break
                
                eax = &eax[2]
                
                if (eax s>= 0xf)
                    break
        
        int32_t edx_1 = *(arg1 + 0x48)
        
        if (edx_1 != 0)
            return edx_1(arg1, eax + arg2)
    
    int32_t var_c_1 = eax + arg2
    sub_5a8559(&data_8b80d0, "libpng warning: %s")
    return sub_5a8559(&data_8b80d0, &data_862374)
}
