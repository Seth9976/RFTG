// 函数名称: sub_5ded60
// 虚拟地址: 0x5ded60
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5ded60(int32_t* arg1)
{
    // 第一条实际指令: if (arg1 == 0)
    if (arg1 == 0)
        sub_5cce60("Passed a NULL condition variable")
        return 0xffffffff
    
    sub_5d1190(*arg1)
    int32_t eax_1 = arg1[1]
    int32_t ecx = arg1[2]
    
    if (eax_1 s<= ecx)
        sub_5d11c0(*arg1)
    else
        int32_t i_3 = eax_1 - ecx
        arg1[2] = eax_1
        
        if (i_3 s> 0)
            int32_t i_2 = i_3
            int32_t i
            
            do
                sub_5dad70(arg1[3])
                i = i_2
                i_2 -= 1
            while (i != 1)
        
        sub_5d11c0(*arg1)
        
        if (i_3 s> 0)
            int32_t i_1
            
            do
                sub_5dad50(arg1[4])
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
    
    return 0
}
