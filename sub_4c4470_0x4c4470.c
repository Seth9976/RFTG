// 函数名称: sub_4c4470
// 虚拟地址: 0x4c4470
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4c4470(int32_t* arg1, char arg2, char* arg3)
{
    // 第一条实际指令: char* const eax = *arg1
    char* const eax = *arg1
    
    if (eax == 0)
        eax = &data_83f3d3
    
    while (true)
        arg2 = *eax
        char temp0_1 = *arg3
        bool c_1 = arg2 u< temp0_1
        
        if (arg2 == temp0_1)
            if (arg2 == 0)
                break
            
            arg2 = eax[1]
            char temp3_1 = arg3[1]
            c_1 = arg2 u< temp3_1
            
            if (arg2 == temp3_1)
                eax = &eax[2]
                arg3 = &arg3[2]
                
                if (arg2 == 0)
                    break
                
                continue
        
        bool c_2 = unimplemented  {sbb eax, eax}
        int32_t result
        result.b = sbb.d(sbb.d(eax, eax, c_1), 0xffffffff, c_2) == 0
        return result
    
    int32_t eax_1
    eax_1.b = true
    return 1
}
