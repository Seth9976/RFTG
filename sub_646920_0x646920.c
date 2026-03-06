// 函数名称: sub_646920
// 虚拟地址: 0x646920
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

voidsub_646920(int32_t* arg1)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        return 
    
    if (*arg1 != 0)
        int32_t i = 0
        
        if (arg1[2] s> 0)
            do
                int32_t eax_1 = *arg1
                
                if (*(eax_1 + (i << 2)) != 0)
                    __free_base(*(eax_1 + (i << 2)))
                
                i += 1
            while (i s< arg1[2])
        
        __free_base(*arg1)
    
    int32_t eax_3 = arg1[1]
    
    if (eax_3 != 0)
        __free_base(eax_3)
    
    int32_t eax_4 = arg1[3]
    
    if (eax_4 != 0)
        __free_base(eax_4)
    
    *arg1 = 0
    arg1[1] = 0
    arg1[2] = 0
    arg1[3] = 0
}
