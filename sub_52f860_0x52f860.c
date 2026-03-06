// 函数名称: sub_52f860
// 虚拟地址: 0x52f860
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t* __convention("regparm")sub_52f860(int128_t* arg1)
{
    // 第一条实际指令: int32_t* edi = arg1
    int32_t* edi = arg1
    
    if (data_315f6a8 != 0)
        if (*edi == 1)
            int32_t edi_1 = edi[1]
            
            if (edi_1 == 0x1b || edi_1 == 9 || edi_1 == 0xd)
                sub_52b650()
                sub_52b9d0(data_be1ef4)
                data_315f6a8 = 0
                void* eax_1
                eax_1.b = 1
                return eax_1
        
        arg1.b = 0
        return arg1
    
    float var_8
    
    if (*edi == 9)
        var_8 = fconvert.s(float.t(edi[3]) * fconvert.t(0.0020000000949949026) + fconvert.t(1.0))
        data_30d950c = fconvert.s(fconvert.t(var_8) * fconvert.t(data_30d950c))
    
    if (*edi == 1)
        if (data_30da524 == 0 && data_30da525:1.b == 0)
            if (data_30da525.b == 0 || edi[1] != 0xd)
                goto label_52f922
            
            data_30da524 = 0
            data_30da525 = 0
        else if (edi[1] != 0xd)
        label_52f922:
            
            if (edi[1] != 0x53)
            label_52f95f:
                
                if (edi[1] == 0x54)
                    arg1 = sub_528030()
                
                if (edi[1] != 0x54 || arg1.b == 0)
                    char eax_5
                    
                    if (edi[1] == 8)
                        eax_5 = sub_528030()
                    
                    if (edi[1] == 8 && eax_5 != 0)
                        sub_56bb10()
                    else if (edi[1] != 9)
                    label_52f9e2:
                        
                        if (edi[1] == 0x4f)
                            arg1 = sub_528030()
                        
                        if (edi[1] != 0x4f || arg1.b == 0)
                            if (edi[1] == 0xdb && sub_528030() != 0 && sub_527fb0() != 0)
                                sub_52f6f0()
                                noreturn
                            
                            if (edi[1] == 0xdd && sub_528030() != 0 && sub_527fb0() != 0)
                                sub_52f6b0()
                                noreturn
                            
                            if (edi[1] == 0xdb && sub_528030() != 0)
                                sub_52f770()
                                noreturn
                            
                            if (edi[1] == 0xdd && sub_528030() != 0)
                                sub_52f730()
                                noreturn
                            
                            arg1 = edi[1]
                            
                            if (arg1 != 0x43)
                                if (arg1 != 0x4a)
                                label_52fae6:
                                    int32_t eax_16 = edi[1]
                                    
                                    if (eax_16 != 0x42)
                                        if (eax_16 == 0xbb)
                                            arg1 = sub_528030()
                                        
                                        if (eax_16 != 0xbb || arg1.b == 0)
                                            if (edi[1] == 0xbd)
                                                arg1 = sub_528030()
                                            
                                            if (edi[1] != 0xbd || arg1.b == 0)
                                                char* ecx_5
                                                
                                                if (edi[1] == 0x5a)
                                                    arg1, ecx_5 = sub_528030()
                                                
                                                if (edi[1] != 0x5a || arg1.b == 0)
                                                    char eax_21
                                                    
                                                    if (edi[1] == 0x59)
                                                        eax_21 = sub_528030()
                                                    
                                                    if (edi[1] != 0x59 || eax_21 == 0)
                                                        int32_t eax_22 = edi[1]
                                                        
                                                        if (eax_22 != 0x2e)
                                                            char eax_23
                                                            
                                                            if (eax_22 == 0x41)
                                                                eax_23 = sub_528030()
                                                            
                                                            if (eax_22 != 0x41 || eax_23 == 0
                                                                    || data_30da524 != 0)
                                                                char eax_24
                                                                
                                                                if (edi[1] == 0x44)
                                                                    eax_24 = sub_528030()
                                                                
                                                                if (edi[1] != 0x44 || eax_24 == 0
                                                                        || data_30da524 != 0)
                                                                    arg1 = edi[1]
                                                                    
                                                                    if (arg1 == 0x27)
                                                                        bool cond:1_1 = (edi[2].b & 1) == 0
                                                                        float var_c_1 = fconvert.s(float.t(1))
                                                                        var_8 = fconvert.s(float.t(0))
                                                                        
                                                                        if (cond:1_1)
                                                                            sub_5292a0()
                                                                        else
                                                                            float var_c_2 =
                                                                                fconvert.s(fconvert.t(10f))
                                                                            var_8 = fconvert.s(fconvert.t(var_8)
                                                                                * fconvert.t(10.0))
                                                                            sub_5292a0()
                                                                    else if (arg1 == 0x25)
                                                                        bool cond:2_1 = (edi[2].b & 1) == 0
                                                                        float var_c_3 =
                                                                            fconvert.s(fconvert.t(-1f))
                                                                        var_8 = fconvert.s(float.t(0))
                                                                        
                                                                        if (cond:2_1)
                                                                            sub_5292a0()
                                                                        else
                                                                            float var_c_4 =
                                                                                fconvert.s(fconvert.t(-10f))
                                                                            var_8 = fconvert.s(fconvert.t(var_8)
                                                                                * fconvert.t(10.0))
                                                                            sub_5292a0()
                                                                    else if (arg1 == 0x26)
                                                                        float var_c_5 = fconvert.s(float.t(0))
                                                                        var_8 = fconvert.s(fconvert.t(-1f))
                                                                    label_52fcb4:
                                                                        
                                                                        if ((edi[2].b & 1) == 0)
                                                                            sub_5292a0()
                                                                        else
                                                                            long double x87_r6_1 = fconvert.t(10.0)
                                                                            float var_c_7 =
                                                                                fconvert.s(float.t(0) * x87_r6_1)
                                                                            var_8 =
                                                                                fconvert.s(x87_r6_1 * fconvert.t(var_8))
                                                                            sub_5292a0()
                                                                    else if (arg1 == 0x28)
                                                                        float var_c_6 = fconvert.s(float.t(0))
                                                                        var_8 = fconvert.s(float.t(1))
                                                                        goto label_52fcb4
                                                                else
                                                                    sub_5283e0()
                                                            else
                                                                sub_52f7b0()
                                                        else
                                                            sub_529150()
                                                    else
                                                        sub_528c40()
                                                else if (data_315b330 s> 1)
                                                    sub_536c00(ecx_5)
                                                    int32_t eax_18 = data_315b330 - 1
                                                    data_315b330 = eax_18
                                                    sub_528a80(&(&data_30d9514)[eax_18 * 0x407])
                                            else
                                                data_30d950c = fconvert.s(fconvert.t(data_30d950c)
                                                    / fconvert.t(1.2999999523162842))
                                        else
                                            data_30d950c = fconvert.s(fconvert.t(data_30d950c)
                                                * fconvert.t(1.2999999523162842))
                                    else
                                        sub_5283e0()
                                        data_30da524.w = 0x100
                                else
                                    arg1 = sub_528030()
                                    
                                    if (arg1.b == 0)
                                        goto label_52fae6
                                    
                                    if (data_30da51c != 0)
                                        sub_52e6c0()
                                        sub_528280(1)
                            else if (data_30da51c == 1)
                                data_30da525:1.b = 1
                        else if (data_30da51c == 1)
                            arg1 = sub_528f30(data_30d951c)
                            
                            if (arg1[0x14c].d == 2)
                                int32_t esi_1 = *(arg1 + 0x155c)
                                
                                if (esi_1 != 0)
                                    sub_56bbb0(esi_1)
                    else
                        char eax_6 = sub_528030()
                        char eax_7
                        
                        if (eax_6 != 0)
                            eax_7 = sub_527fb0()
                        
                        if (eax_6 == 0 || eax_7 == 0)
                            if (edi[1] != 9)
                                goto label_52f9e2
                            
                            if (sub_528030() == 0)
                                goto label_52f9e2
                            
                            sub_56bb60()
                        else
                            sub_56bb10()
                else
                    bool cond:0_1 = data_30da51c s<= 0
                    data_30da525.b = 0
                    
                    if (not(cond:0_1))
                        data_30da524 = 1
            else
                char eax_2 = sub_528030()
                char eax_3
                char* ecx_1
                
                if (eax_2 != 0)
                    eax_3, ecx_1 = sub_527fb0()
                
                if (eax_2 == 0 || eax_3 == 0)
                    if (edi[1] != 0x53)
                        goto label_52f95f
                    
                    char eax_4
                    char* ecx_2
                    eax_4, ecx_2 = sub_528030()
                    
                    if (eax_4 == 0)
                        goto label_52f95f
                    
                    sub_542a90(ecx_2)
                else
                    sub_542f30(ecx_1)
        else
            data_30da524 = 0
            data_30da525 = 0
    
    if (*edi == 3)
        int32_t eax_28 = (*data_30d94f8)()
        
        if (eax_28 == (*data_be1efc)() && eax_28(&data_30d94f8, &data_be1efc).b != 0)
            data_30da528 = 0xffffffff
            data_30da52c = 0xffffffff
            
            if (sub_52e1c0() != 0)
                sub_5294c0()
                int32_t eax_31
                eax_31.b = 1
                return eax_31
            
            if (data_30da524 != 0 || data_30da525:1.b != 0)
                sub_52f480()
            else
                char eax_32
                int80_t st0_1
                st0_1, eax_32 = sub_52e200(&var_8)
                
                if (eax_32 == 0)
                    sub_5283e0()
                    int128_t* eax_36
                    eax_36.b = 1
                    return eax_36
                
                char eax_33 = sub_528030()
                float edi_2 = var_8
                
                if (eax_33 != 0)
                    sub_52b3b0(edi_2)
                label_52fda4:
                    data_315b359 = 1
                    goto label_52fdab
                
                if (sub_52e280(edi_2).b == 0)
                    char eax_34
                    int32_t ecx_11
                    eax_34, ecx_11 = sub_527ff0()
                    
                    if (eax_34 == 0 || data_30da51c s<= 0)
                        sub_52ad60(ecx_11)
                        goto label_52fda4
                    
                label_52fdb4:
                    
                    if (sub_527ff0() != 0)
                        int32_t var_20_3 = sub_52e6c0()
                        sub_5288e0(fconvert.s(float.t(0)))
                    
                    sub_52f480()
                else
                    data_315b359 = 0
                label_52fdab:
                    
                    if (data_30da51c s> 0)
                        goto label_52fdb4
    
    arg1.b = 1
    return arg1
}
