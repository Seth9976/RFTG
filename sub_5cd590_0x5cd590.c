// 函数名称: sub_5cd590
// 虚拟地址: 0x5cd590
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_5cd590(char* arg1, char* arg2)
{
    // 第一条实际指令: char* edx = arg2
    char* edx = arg2
    char* ecx = arg1
    
    while (true)
        int32_t eax
        eax.b = *ecx
        char temp0_1 = *edx
        bool c_1 = eax.b u< temp0_1
        
        if (eax.b == temp0_1)
            if (eax.b == 0)
                break
            
            eax.b = ecx[1]
            char temp3_1 = edx[1]
            c_1 = eax.b u< temp3_1
            
            if (eax.b == temp3_1)
                ecx = &ecx[2]
                edx = &edx[2]
                
                if (eax.b == 0)
                    break
                
                continue
        
        bool c_2 = unimplemented  {sbb eax, eax}
        return sbb.d(sbb.d(eax, eax, c_1), 0xffffffff, c_2)
    
    return 0
}
