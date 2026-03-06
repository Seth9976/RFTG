// 函数名称: sub_6814c0
// 虚拟地址: 0x6814c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_6814c0(int32_t* arg1)
{
    // 第一条实际指令: int32_t (** eax_1)() = (*arg1[1])(arg1, 1, 0x18)
    int32_t (** eax_1)() = (*arg1[1])(arg1, 1, 0x18)
    arg1[0x72] = eax_1
    *eax_1 = sub_4d35a0
    int32_t eax_3 = arg1[0xa] - 1
    
    if (eax_3 u<= 4)
        switch (eax_3)
            case 0
                if (arg1[9] != 1)
                    *(*arg1 + 0x14) = 0xa
                    (**arg1)(arg1)
            case 1, 2
                if (arg1[9] != 3)
                    *(*arg1 + 0x14) = 0xa
                    (**arg1)(arg1)
            case 3, 4
                if (arg1[9] != 4)
                    *(*arg1 + 0x14) = 0xa
                    (**arg1)(arg1)
    else if (arg1[9] s< 1)
        *(*arg1 + 0x14) = 0xa
        (**arg1)(arg1)
    
    int32_t ecx_2 = arg1[0xb]
    int32_t* i
    
    if (ecx_2 == 1)
        int32_t eax_10 = arg1[0xa]
        arg1[0x1e] = 1
        
        if (eax_10 == 1 || eax_10 == 3)
            eax_1[1] = sub_6812f0
            i = 1
            
            if (arg1[9] s> 1)
                int32_t ecx_4 = 0x54
                
                do
                    *(arg1[0x36] + ecx_4 + 0x30) = 0
                    i += 1
                    ecx_4 += 0x54
                while (i s< arg1[9])
        else
            *(*arg1 + 0x14) = 0x1b
            i = (**arg1)(arg1)
    else if (ecx_2 == 2)
        i = arg1[0xa]
        arg1[0x1e] = 3
        
        if (i == 3)
            eax_1[1] = sub_681150
            i = sub_681080(arg1)
        else if (i == 1)
            eax_1[1] = sub_681320
        else if (i != 2)
            *(*arg1 + 0x14) = 0x1b
            i = (**arg1)(arg1)
        else
            eax_1[1] = sub_681270
    else
        i = ecx_2 - 4
        
        if (ecx_2 == 4)
            i = arg1[0xa]
            arg1[0x1e] = 4
            
            if (i == 5)
                eax_1[1] = sub_681380
                i = sub_681080(arg1)
            else if (i != 4)
                *(*arg1 + 0x14) = 0x1b
                i = (**arg1)(arg1)
            else
                eax_1[1] = sub_681270
        else if (ecx_2 != arg1[0xa])
            *(*arg1 + 0x14) = 0x1b
            i = (**arg1)(arg1)
        else
            arg1[0x1e] = arg1[9]
            eax_1[1] = sub_681270
    
    if (arg1[0x15] != 0)
        arg1[0x1f] = 1
        return i
    
    int32_t eax_12 = arg1[0x1e]
    arg1[0x1f] = eax_12
    return eax_12
}
