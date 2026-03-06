// 函数名称: sub_650b20
// 虚拟地址: 0x650b20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_650b20(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    sub_68b1d0(arg2, 0x564342, 0x18)
    int32_t* esi = arg1
    sub_68b1d0(arg2, *esi, 0x10)
    sub_68b1d0(arg2, esi[1], 0x18)
    int32_t ecx_2 = esi[1]
    int32_t eax_1 = 1
    
    if (ecx_2 s> 1)
        arg1 = esi[2]
        
        while (*arg1 != 0)
            int32_t edx_3 = esi[2]
            
            if (*(edx_3 + (eax_1 << 2)) s< *(edx_3 + (eax_1 << 2) - 4))
                break
            
            arg1 = &arg1[1]
            eax_1 += 1
            
            if (eax_1 s>= ecx_2)
                break
    
    if (eax_1 != ecx_2)
        sub_68b1d0(arg2, 0, 1)
        int32_t ecx_9 = esi[1]
        int32_t eax_9 = 0
        
        if (ecx_9 s> 0)
            int32_t* edx_8 = esi[2]
            
            while (*edx_8 != 0)
                eax_9 += 1
                edx_8 = &edx_8[1]
                
                if (eax_9 s>= ecx_9)
                    break
        
        if (eax_9 != ecx_9)
            sub_68b1d0(arg2, 1, 1)
            int32_t i = 0
            
            if (esi[1] s> 0)
                do
                    if (*(esi[2] + (i << 2)) != 0)
                        sub_68b1d0(arg2, 1, 1)
                        sub_68b1d0(arg2, *(esi[2] + (i << 2)) - 1, 5)
                    else
                        sub_68b1d0(arg2, 0, 1)
                    
                    i += 1
                while (i s< esi[1])
        else
            sub_68b1d0(arg2, 0, 1)
            
            if (esi[1] s> 0)
                int32_t i_1 = 0
                
                do
                    sub_68b1d0(arg2, *(esi[2] + (i_1 << 2)) - 1, 5)
                    i_1 += 1
                while (i_1 s< esi[1])
    else
        arg1 = nullptr
        sub_68b1d0(arg2, 1, 1)
        sub_68b1d0(arg2, *esi[2] - 1, 5)
        int32_t* i_2 = 1
        
        if (esi[1] s> 1)
            do
                int32_t edx_5 = esi[2]
                int32_t eax_3 = *(edx_5 + (i_2 << 2))
                int32_t ecx_6 = *(edx_5 + (i_2 << 2) - 4)
                
                if (eax_3 s> ecx_6)
                    int32_t j_1 = eax_3 - ecx_6
                    int32_t j
                    
                    do
                        sub_68b1d0(arg2, i_2 - arg1, sub_64fbf0(esi[1] - arg1))
                        j = j_1
                        j_1 -= 1
                        arg1 = i_2
                    while (j != 1)
                
                i_2 += 1
            while (i_2 s< esi[1])
        
        sub_68b1d0(arg2, i_2 - arg1, sub_64fbf0(esi[1] - arg1))
    
    sub_68b1d0(arg2, esi[3], 4)
    int32_t eax_12 = esi[3]
    
    if (eax_12 != 0)
        if (eax_12 - 1 u> 1 || esi[8] == 0)
            return 0xffffffff
        
        sub_68b1d0(arg2, esi[4], 0x20)
        sub_68b1d0(arg2, esi[5], 0x20)
        sub_68b1d0(arg2, esi[6] - 1, 4)
        sub_68b1d0(arg2, esi[7], 1)
        int32_t eax_17 = esi[3]
        long double x87_r0
        
        if (eax_17 == 1)
            arg1 = sub_64fea0(x87_r0, esi)
        else if (eax_17 == 2)
            arg1 = esi[1] * *esi
        else
            arg1 = 0xffffffff
        
        if (arg1 s> 0)
            int32_t ebx_3 = 0
            
            do
                int32_t eax_23
                int32_t edx_14
                edx_14:eax_23 = sx.q(*(esi[8] + (ebx_3 << 2)))
                sub_68b1d0(arg2, (eax_23 ^ edx_14) - edx_14, esi[6])
                ebx_3 += 1
            while (ebx_3 s< arg1)
    
    return 0
}
