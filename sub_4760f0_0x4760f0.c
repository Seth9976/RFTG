// 函数名称: sub_4760f0
// 虚拟地址: 0x4760f0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void*sub_4760f0(int32_t* arg1 @ edi)
{
    // 第一条实际指令: void var_d8
    void var_d8
    int32_t var_c = __security_cookie ^ &var_d8
    char var_d1 = 0
    
    if (data_307d094 != 0 && data_307d375 != 0)
        var_d1 = 1
    else if (data_307cd50 != 0 && data_307cdad != 0)
        var_d1 = 1
    
    int32_t ecx = *arg1
    char edx
    
    if (ecx != 0xd || arg1[1] != 4)
        edx = 0
    else
        edx = 1
    
    int32_t eax_1
    
    if (ecx != 0xc || arg1[1] != 0x2000)
        eax_1.b = 0
    else
        eax_1.b = 1
    
    eax_1.b |= edx
    
    if ((ecx != 0 || arg1[1] != 0x1b) && (ecx != 0xc || arg1[1] != 0x20)
            && (ecx != 0x11 || arg1[1] != 0x200000) && (ecx != 0xd || arg1[1] != 2) && eax_1.b == 0
            && (ecx != 0x19 || arg1[1] != 0x200000))
        void* eax_2
        
        if (*(data_27e7fcc + 0x40) != 0 && ecx == 0)
            int128_t var_d0[0x4]
            
            if (arg1[1] == 0x20 && var_d1 == ecx.b && sub_4de200().b == 0 && data_307cd08 == 0)
                sub_5abfc0(&var_d0, 0, 0x90)
                int32_t var_90 = 2
                int32_t var_8c = 0
                sub_474f30(arg1, &var_d0)
                struct _EXCEPTION_REGISTRATION_RECORD** eax_3
                eax_3.b = 1
                sub_5a6aba(var_c ^ &var_d8)
                return eax_3
            
            if (*arg1 == 0)
                eax_2 = arg1[1]
                
                if (eax_2 == 0x70 && var_d1 == 0)
                    sub_5abfc0(&var_d0, 0, 0x90)
                    int32_t var_90_1 = 2
                    int32_t var_8c_1 = 0
                    sub_474f30(arg1, &var_d0)
                    struct _EXCEPTION_REGISTRATION_RECORD** eax_4
                    eax_4.b = 1
                    sub_5a6aba(var_c ^ &var_d8)
                    return eax_4
                
                if (eax_2 == 0x62 && var_d1 == 0)
                    if (data_8c86e4 == var_d1)
                        data_8c86e4 = 1
                        sub_401a20(&data_8c86e8)
                    
                    data_27c05f4 = 8
                
                if (*arg1 == 0)
                    if (arg1[1] == 0x74 && var_d1 == 0)
                        sub_4088c0(*(data_27e7a54 + 0x20c))
                        void* eax_5 = data_27e7a54
                        data_27c060c = var_d1
                        *(eax_5 + 0x204) += 1
                        
                        if (*(eax_5 + 0x204) s>= 3)
                            *(eax_5 + 0x204) = 0
                        
                        sub_408a40()
                    
                    if (*arg1 == 0 && arg1[1] == 0x6e && var_d1 == 0)
                        sub_4e4070()
        
        eax_2.b = 0
        sub_5a6aba(var_c ^ &var_d8)
        return eax_2
    
    if (data_307d978 == 1)
        sub_4d6480(data_307bf0c)
        void var_3c
        sub_4d66f0(&var_3c)
        int32_t eax_6
        eax_6.b = 0
        data_307d978 = 0
        
        if (data_307d9bc == 0)
            data_307d96c = 1
            eax_6.b = 1
            sub_5a6aba(var_c ^ &var_d8)
            return eax_6
        
        data_307d9bc = 0
        eax_6.b = 1
        sub_5a6aba(var_c ^ &var_d8)
        return eax_6
    
    if (data_307d0cc == 1)
        sub_4ba5d0(0)
        int32_t eax_7
        eax_7.b = 1
        sub_5a6aba(var_c ^ &var_d8)
        return eax_7
    
    if (data_307d590 == 1)
        ecx.b = 0
        sub_4ba4f0(ecx, &data_307d094)
    label_476742:
        data_307d094 = 1
    label_476754:
        eax_1.b = 1
        sub_5a6aba(var_c ^ &var_d8)
        return eax_1
    
    if (data_307cd14 == 1)
        data_307cd14 = 0
        eax_1.b = 1
        sub_5a6aba(var_c ^ &var_d8)
        return eax_1
    
    if (data_307cdb8 == 1)
        data_307bf0c
        sub_4d6980()
        data_307cdb8 = 0
        int32_t eax_8
        eax_8.b = 1
        sub_5a6aba(var_c ^ &var_d8)
        return eax_8
    
    if (data_307cd50 == 1)
        data_307bf0c
        sub_4d6980()
        data_307cd50 = 0
        int32_t eax_9
        eax_9.b = 1
        sub_5a6aba(var_c ^ &var_d8)
        return eax_9
    
    if (data_307cd38 != 1)
        if (data_307cd0c != 1)
            if (data_307db1c == 1)
                data_307bf0c
                sub_4d6980()
                data_307db1c = 0
                int32_t eax_10
                eax_10.b = 1
                sub_5a6aba(var_c ^ &var_d8)
                return eax_10
            
            if (data_307daf4 == 1)
                data_307bf0c
                sub_4d6980()
                sub_416710(&data_307daf4)
                int128_t* eax_11
                eax_11.b = 1
                sub_5a6aba(var_c ^ &var_d8)
                return eax_11
            
            if (data_307db08 == 1)
                data_307bf0c
                sub_4d6980()
                data_307db08 = 0
                int32_t eax_12
                eax_12.b = 1
                sub_5a6aba(var_c ^ &var_d8)
                return eax_12
            
            if (data_307d9c0 == 1)
                data_307bf0c
                sub_4d6980()
                data_307cd08 = 0
                data_307d9c0 = 0
                int32_t eax_13
                eax_13.b = 1
                sub_5a6aba(var_c ^ &var_d8)
                return eax_13
            
            if (data_307d8d4 == 1)
                data_307bf0c
                sub_4d6980()
                data_307d8d4 = 0
                int32_t eax_14
                eax_14.b = 1
                sub_5a6aba(var_c ^ &var_d8)
                return eax_14
            
            if (data_307d8cc == 1)
                data_307bf0c
                sub_4d6980()
                bool cond:3_1 = data_307d960 s<= 1
                data_307d8cc = 0
                
                if (not(cond:3_1))
                    data_307d8d4 = 1
                    eax_1.b = 1
                    sub_5a6aba(var_c ^ &var_d8)
                    return eax_1
                
                goto label_476754
            
            if (data_307d96c == 1)
                data_307bf0c
                sub_4d6980()
                data_307d96c = 0
                int32_t eax_15
                eax_15.b = 1
                sub_5a6aba(var_c ^ &var_d8)
                return eax_15
            
            if (data_307d8b8 == 1)
                data_307bf0c
                sub_4d6980()
                data_307d8c8 = 0
                data_307d8b8 = 0
                int32_t eax_16
                eax_16.b = 1
                sub_5a6aba(var_c ^ &var_d8)
                return eax_16
            
            if (data_307d594 == 1)
                data_307bf0c
                sub_4d6980()
                data_307d594 = 0
                int32_t eax_17
                eax_17.b = 1
                sub_5a6aba(var_c ^ &var_d8)
                return eax_17
            
            if (data_307d094 == 1)
                data_307bf0c
                sub_4d6980()
                data_307d094 = 0
                int32_t eax_18
                eax_18.b = 1
                sub_5a6aba(var_c ^ &var_d8)
                return eax_18
            
            if (data_307d09c == 1)
                data_307bf0c
                sub_4d6980()
                data_307d09c = 0
                goto label_476742
            
            if (data_307d0a4 != 1)
                goto label_476754
            
            data_307bf0c
            sub_4d6980()
            data_307d0a4 = 0
            goto label_476742
        
        data_307bf0c
        sub_4d6980()
        bool cond:2_1 = data_307d080 == 0
        data_307cd0c = 0
        
        if (cond:2_1)
            goto label_476754
    else
        data_307bf0c
        sub_4d6980()
        bool cond:1_1 = data_307cd3c != 0
        data_307cd38 = 0
        
        if (not(cond:1_1))
            data_307cd0c = 1
            eax_1.b = 1
            sub_5a6aba(var_c ^ &var_d8)
            return eax_1
    
    data_307d9c0 = 1
    eax_1.b = 1
    sub_5a6aba(var_c ^ &var_d8)
    return eax_1
}
