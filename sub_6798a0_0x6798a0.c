// 函数名称: sub_6798a0
// 虚拟地址: 0x6798a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6798a0(int32_t* arg1)
{
    // 第一条实际指令: if (arg1[5] == 0xca)
    if (arg1[5] == 0xca)
        sub_67d130(arg1)
        
        if (arg1[0x10] != 0)
            arg1[5] = 0xcf
            return 1
        
        arg1[5] = 0xcb
    
    int32_t eax_1 = arg1[5]
    
    if (eax_1 != 0xcb)
        if (eax_1 != 0xcc)
            *(*arg1 + 0x14) = 0x14
            *(*arg1 + 0x18) = arg1[5]
            (**arg1)(arg1)
        
        return sub_679730(arg1)
    
    if (*(arg1[0x6d] + 0x10) != 0)
        while (true)
            int32_t* eax_3 = arg1[2]
            
            if (eax_3 != 0)
                (*eax_3)(arg1)
            
            int32_t eax_5 = (*arg1[0x6d])(arg1)
            
            if (eax_5 == 0)
                return 0
            
            if (eax_5 == 2)
                break
            
            void* ecx_2 = arg1[2]
            
            if (ecx_2 != 0)
                if (eax_5 != 3 && eax_5 != 1)
                    continue
                
                *(ecx_2 + 4) += 1
                void* eax_6 = arg1[2]
                
                if (*(ecx_2 + 4) s>= *(eax_6 + 8))
                    *(eax_6 + 8) += arg1[0x50]
    
    arg1[0x26] = arg1[0x24]
    return sub_679730(arg1)
}
