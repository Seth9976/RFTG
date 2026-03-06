// 函数名称: sub_5b6d02
// 虚拟地址: 0x5b6d02
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_t*sub_5b6d02(int32_t* arg1, int32_t* arg2, int32_t arg3, void* arg4, void* arg5, char arg6, int32_t arg7, int32_t* arg8)
{
    // 第一条实际指令: void* ebx = arg5
    void* ebx = arg5
    int32_t eax = *(ebx + 4)
    int32_t edi
    int32_t var_44 = edi
    char var_5 = 0
    int32_t ecx_1
    
    if (eax s> 0x80)
        ecx_1 = arg2[2]
    else
        ecx_1 = sx.d(arg2[2].b)
    
    if (ecx_1 s< 0xffffffff || ecx_1 s>= eax)
        _inconsistency()
        noreturn
    
    int32_t* esi = arg1
    
    if (*esi != 0xe06d7363)
        goto label_5b7033
    
    if (esi[4] != 3)
        goto label_5b6e8f
    
    int32_t eax_1 = esi[5]
    
    if (eax_1 == 0x19930520 || eax_1 == 0x19930521)
        if (esi[7] != 0)
            goto label_5b6e8f
    else if (eax_1 != 0x19930522 || esi[7] != 0)
        goto label_5b6e8f
    
    uint32_t* result = __getptd()
    
    if (result[0x22] == 0)
        return result
    
    esi = __getptd()[0x22]
    arg1 = esi
    arg3 = __getptd()[0x23]
    
    if (sub_5bb0f1(esi) == 0)
        _inconsistency()
        noreturn
    
    if (*esi == 0xe06d7363 && esi[4] == 3)
        int32_t eax_6 = esi[5]
        
        if ((eax_6 == 0x19930520 || eax_6 == 0x19930521 || eax_6 == 0x19930522) && esi[7] == 0)
            _inconsistency()
            noreturn
    
    if (__getptd()[0x25] == 0)
        goto label_5b6e8f
    
    int32_t* edi_1 = __getptd()[0x25]
    uint32_t* eax_9 = __getptd()
    int32_t* var_48_1 = arg1
    int32_t i_1 = 0
    eax_9[0x25] = 0
    
    if (sub_5b6721(edi_1, var_48_1) != 0)
        esi = arg1
    label_5b6e8f:
        int32_t eax_13
        
        if (*esi == 0xe06d7363 && esi[4] == 3)
            eax_13 = esi[5]
        
        if (*esi == 0xe06d7363 && esi[4] == 3
                && (eax_13 == 0x19930520 || eax_13 == 0x19930521 || eax_13 == 0x19930522))
            void* edi_2 = arg5
            
            if (*(edi_2 + 0xc) u> 0)
                int32_t var_24
                int32_t var_14
                void* eax_14 = sub_5ab6d3(edi_2, arg7, ecx_1, &var_14, &var_24)
                
                if (var_14 u< var_24)
                    void* edi_3 = eax_14 + 0x10
                    void* var_20_1 = edi_3
                    
                    do
                        if (*(edi_3 - 0x10) s<= ecx_1 && ecx_1 s<= *(edi_3 - 0xc))
                            char* var_10_1 = *edi_3
                            int32_t i_2 = *(edi_3 - 4)
                            int32_t i = i_2
                            
                            if (i_2 s> 0)
                                do
                                    int32_t* eax_18 = *(esi[7] + 0xc)
                                    void* ebx_2 = &eax_18[1]
                                    int32_t eax_19 = *eax_18
                                    int32_t var_18_1 = eax_19
                                    
                                    if (eax_19 s> 0)
                                        while (true)
                                            void* eax_20 = *ebx_2
                                            int32_t eax_21 = sub_5b64d4(var_10_1, eax_20, esi[7])
                                            
                                            if (eax_21 != 0)
                                                var_5 = 1
                                                sub_5b6b8d(arg2, edi_3 - 0x10, esi, arg3, arg4, arg5, 
                                                    eax_20, arg7, arg8)
                                                esi = arg1
                                                edi_3 = var_20_1
                                                break
                                            
                                            var_18_1 -= 1
                                            ebx_2 += 4
                                            
                                            if (var_18_1 s<= eax_21)
                                                goto label_5b6f42
                                        
                                        break
                                    
                                label_5b6f42:
                                    i -= 1
                                    var_10_1 = &var_10_1[0x10]
                                while (i s> 0)
                        
                        var_14 += 1
                        edi_3 += 0x14
                        var_20_1 = edi_3
                    while (var_14 u< var_24)
                    
                    edi_2 = arg5
            
            if (arg6 != 0)
                sub_5b66a3(esi)
            
            if (var_5 == 0 && (*edi_2 & 0x1fffffff) u>= 0x19930521)
                int32_t* edi_5 = *(edi_2 + 0x1c)
                
                if (edi_5 != 0 && sub_5b6721(edi_5, esi) == 0)
                    __getptd()
                    __getptd()
                    __getptd()[0x22] = esi
                    __getptd()[0x23] = arg3
                    int32_t* var_4c_8
                    
                    var_4c_8 = arg8 != 0 ? arg8 : arg2
                    
                    sub_5ab4a0(var_4c_8, esi)
                    int32_t var_48_9 = 0xffffffff
                    sub_5b6582(arg2, arg4, arg5)
                    int32_t var_48_10 = *(arg5 + 0x1c)
                    CallUnexpected()
                    noreturn
            
            goto label_5b705f
        
        ebx = arg5
    label_5b7033:
        
        if (*(ebx + 0xc) u<= 0)
            goto label_5b705f
        
        if (arg6 == 0)
            sub_5b6bfb(esi, arg2, arg3, arg4, ebx, ecx_1, arg7, arg8)
        label_5b705f:
            result = __getptd()
            
            if (result[0x25] == 0)
                return result
            
            _inconsistency()
            noreturn
    else
        int32_t ebx_1 = 0
        
        if (*edi_1 s> 0)
            do
                if (sub_5a70d5(*(ebx_1 + edi_1[1] + 4), 
                        &class std::bad_exception `RTTI Type Descriptor') != 0)
                    int32_t var_48_2 = 1
                    sub_5b66a3(arg1)
                    arg1 = "bad exception"
                    struct std::exception::VTable* var_38
                    std::exception::exception(&var_38, &arg1)
                    var_38 = &std::bad_exception::`vftable'{for `std::exception'}
                    sub_5ab41b(&var_38, 0x8aa69c)
                    noreturn
                
                i_1 += 1
                ebx_1 += 0x10
            while (i_1 s< *edi_1)
    
    terminate()
    noreturn
}
