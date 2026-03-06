// 函数名称: sub_4c4420
// 虚拟地址: 0x4c4420
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4c4420(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: char* eax_3 = *arg1
    char* eax_3 = *arg1
    char* const ecx = &data_83f3d3
    
    if (eax_3 != 0)
        ecx = eax_3
    
    char* const eax = *arg2
    
    if (eax == 0)
        eax = &data_83f3d3
    
    while (true)
        arg2.b = *eax
        char temp0_1 = *ecx
        bool c_1 = arg2.b u< temp0_1
        
        if (arg2.b == temp0_1)
            if (arg2.b == 0)
                break
            
            arg2.b = eax[1]
            char temp3_1 = ecx[1]
            c_1 = arg2.b u< temp3_1
            
            if (arg2.b == temp3_1)
                eax = &eax[2]
                ecx = &ecx[2]
                
                if (arg2.b == 0)
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
