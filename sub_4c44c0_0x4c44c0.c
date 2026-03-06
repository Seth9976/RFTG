// 函数名称: sub_4c44c0
// 虚拟地址: 0x4c44c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4c44c0(int32_t* arg1)
{
    // 第一条实际指令: char* const eax = *arg1
    char* const eax = *arg1
    
    if (eax == 0)
        eax = &data_83f3d3
    
    char* const ecx = &data_83f3d3
    
    while (true)
        char edx = *eax
        char temp0_1 = *ecx
        bool c_1 = edx u< temp0_1
        
        if (edx == temp0_1)
            if (edx == 0)
                break
            
            edx = eax[1]
            char temp3_1 = ecx[1]
            c_1 = edx u< temp3_1
            
            if (edx == temp3_1)
                eax = &eax[2]
                ecx = &ecx[2]
                
                if (edx == 0)
                    break
                
                continue
        
        bool c_2 = unimplemented  {sbb eax, eax}
        int32_t result
        result.b = sbb.d(sbb.d(eax, eax, c_1), 0xffffffff, c_2) != 0
        return result
    
    int32_t eax_1
    eax_1.b = false
    return 0
}
