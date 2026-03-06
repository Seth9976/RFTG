// 函数名称: sub_6073a0
// 虚拟地址: 0x6073a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_6073a0(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax = *arg1
    int32_t eax = *arg1
    
    if ((eax.b & 2) != 0)
        int32_t eax_1 = eax & 0xfffffffd
        *arg1 = eax_1
        
        if (arg2 != 0 && (eax_1.b & 1) == 0)
            int32_t eax_3
            
            if ((*(arg1[0xd] + 0x44) & 0x2000) == 0)
                eax_3 = sub_607260(arg1)
                
                if (eax_3 == 0)
                    *arg1 |= 2
                    return eax_3
            else
                int32_t var_1c_1 = arg1[4] * arg1[3]
                eax_3 = sub_5d0ac0()
                arg1[5] = eax_3
                
                if (eax_3 == 0)
                    *arg1 |= 2
                    return eax_3
                
                sub_611e60(arg1, nullptr, *(arg1[0xd] + 0x48))
                int32_t edx_2 = arg1[3]
                int32_t var_c_1 = arg1[2]
                int32_t var_10_1 = 0
                int32_t var_14 = 0
                int32_t var_8_1 = edx_2
                sub_604c40(arg1, &var_14, arg1, &var_14)
        
        void* eax_5 = arg1[0xd]
        *(eax_5 + 0x44) &= 0xffff9fff
        int32_t var_1c_4 = *(arg1[0xd] + 0xc)
        eax = sub_5d0af0()
        *(arg1[0xd] + 0xc) = 0
    
    return eax
}
