// 函数名称: sub_5c5360
// 虚拟地址: 0x5c5360
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_5c5360(uint32_t arg1, uint8_t* arg2, uint32_t arg3, int32_t arg4, uint32_t arg5)
{
    // 第一条实际指令: uint32_t eax = arg5
    uint32_t eax = arg5
    uint32_t var_24_1
    int32_t var_20_1
    enum WIN32_ERROR var_1c_1
    
    if (eax u> 0xf)
        var_1c_1 = NO_ERROR
        var_20_1 = 0x1c
        var_24_1 = arg1
    label_5c592f:
        zip_error_set(var_24_1, var_20_1, var_1c_1)
        return 0xffffffff
    
    int32_t newFilePointer
    
    switch (eax)
        case 0
            uint32_t esi_5 = arg1
            int32_t eax_19
            int32_t edx
            
            if (*(esi_5 + 0x1c) != 0)
                eax_19, edx = (*(*(esi_5 + 0x18) + 4))(esi_5)
                *(esi_5 + 0x20) = eax_19
            
            if (*(esi_5 + 0x1c) != 0 && eax_19 == 0xffffffff)
                var_1c_1 = sub_5c4bd0(GetLastError())
                var_20_1 = 0xb
                var_24_1 = esi_5
                goto label_5c592f
            
            if (*(esi_5 + 0x24) != 0)
                int32_t eax_22 = *(esi_5 + 0x6c)
                int32_t ecx_5 = *(esi_5 + 0x68)
                
                if (eax_22 != 0 || ecx_5 != 0)
                    int32_t var_1c_13 = 0
                    int32_t var_20_4 = eax_22
                    int32_t ecx_6 = *(esi_5 + 0x20)
                    
                    if (sub_5c5310(esi_5, edx, ecx_6, ecx_6, ecx_5) s< 0)
                        return 0xffffffff
            
            int32_t eax_25 = *(esi_5 + 0x6c)
            *(esi_5 + 0x78) = *(esi_5 + 0x68)
            *(esi_5 + 0x7c) = eax_25
            return 0
        case 1
            uint32_t esi_6 = arg1
            int32_t eax_27 = *(esi_6 + 0x74)
            int32_t ecx_7 = *(esi_6 + 0x70)
            int32_t eax_28
            uint32_t nNumberOfBytesToRead
            
            if (eax_27 != 0 || ecx_7 != 0)
                eax_28 = sbb.d(eax_27, *(esi_6 + 0x7c), ecx_7 u< *(esi_6 + 0x78))
                nNumberOfBytesToRead = ecx_7 - *(esi_6 + 0x78)
                
                if (eax_28 u>= arg4 && (eax_28 u> arg4 || nNumberOfBytesToRead u> arg3))
                    nNumberOfBytesToRead = arg3
                    eax_28 = arg4
            else
                nNumberOfBytesToRead = arg3
                eax_28 = arg4
            
            if (eax_28 != 0 || nNumberOfBytesToRead u> 0xffffffff)
                nNumberOfBytesToRead = 0xffffffff
                int32_t var_8_1 = 0
            
            int32_t eax_31
            
            if (*(esi_6 + 0x24) == 0)
                int32_t ecx_10 = *(esi_6 + 0x7c)
                int32_t edx_13 = *(esi_6 + 0x78)
                int32_t var_1c_14 = 0
                int32_t var_20_5 = ecx_10
                eax_31 = sub_5c5310(esi_6, edx_13, ecx_10, *(esi_6 + 0x20), edx_13)
            
            if (*(esi_6 + 0x24) == 0 && eax_31 s< 0)
                return 0xffffffff
            
            if (ReadFile(*(esi_6 + 0x20), arg2, nNumberOfBytesToRead, &arg5, nullptr) == 0)
                var_1c_1 = sub_5c4bd0(GetLastError())
                var_20_1 = 5
                var_24_1 = esi_6
                goto label_5c592f
            
            uint32_t eax_36 = arg5
            int32_t temp11 = *(esi_6 + 0x78)
            *(esi_6 + 0x78) += eax_36
            *(esi_6 + 0x7c) = adc.d(*(esi_6 + 0x7c), 0, temp11 + eax_36 u< temp11)
            return eax_36
        case 2
            uint32_t esi_3 = arg1
            
            if (*(esi_3 + 0x1c) != 0)
                CloseHandle(*(esi_3 + 0x20))
                *(esi_3 + 0x20) = 0xffffffff
            
            return 0
        case 3
            if (arg4 u<= 0 && (arg4 u< 0 || arg3 u< 0x40))
                return 0xffffffff
            
            int32_t* edi_4 = arg1
            
            if ((edi_4[0xa] | edi_4[0xb]) != 0)
                __builtin_memcpy(arg2, &edi_4[0xa], 0x40)
                return 0x40
            
            HANDLE hObject_2 = edi_4[8]
            
            if (hObject_2 != 0xffffffff)
            label_5c5854:
                int32_t eax_68 = sub_5c5120(arg2, hObject_2, edi_4)
                arg1 = GetLastError()
                
                if (hObject_2 != edi_4[8])
                    CloseHandle(hObject_2)
                
                if (eax_68 s>= 0)
                    return 0x40
                
                var_1c_1 = sub_5c4bd0(arg1)
                var_20_1 = 5
                var_24_1 = edi_4
            else
                hObject_2 = (*(edi_4[6] + 4))(edi_4)
                
                if (hObject_2 != 0xffffffff)
                    goto label_5c5854
                
                enum WIN32_ERROR eax_67 = GetLastError()
                
                if (eax_67 != ERROR_FILE_NOT_FOUND)
                    goto label_5c5854
                
                var_1c_1 = eax_67
                var_20_1 = 5
                var_24_1 = edi_4
            
            goto label_5c592f
        case 4
            return zip_error_to_data(arg1, arg2, arg3, arg4)
        case 5
            uint32_t esi_4 = arg1
            __free_base(*(esi_4 + 0x1c))
            __free_base(*(esi_4 + 0x80))
            
            if (*(esi_4 + 0x24) != 0)
                HANDLE hObject = *(esi_4 + 0x20)
                
                if (hObject != 0xffffffff)
                    CloseHandle(hObject)
            
            __free_base(esi_4)
            return 0
        case 6
            if (arg4 u> 0 || (arg4 u>= 0 && arg3 u>= 0x10))
                if (arg2 == 0)
                    return 0xffffffff
                
                uint32_t esi_9 = arg1
                arg1 = *(esi_9 + 0x24)
                int32_t eax_44 = *(arg2 + 8)
                int32_t newFilePointer_1
                int32_t ecx_16
                
                if (eax_44 == 0)
                    newFilePointer_1 = *arg2
                    ecx_16 = *(arg2 + 4)
                label_5c571f:
                    
                    if (ecx_16 s>= 0 && (ecx_16 s> 0 || newFilePointer_1 u>= 0))
                        int32_t temp12_1 = *(esi_9 + 0x6c)
                        
                        if (ecx_16 u>= temp12_1
                                && (ecx_16 u> temp12_1 || newFilePointer_1 u>= *(esi_9 + 0x68)))
                            int32_t edi_3 = *(esi_9 + 0x70)
                            int32_t edx_21 = *(esi_9 + 0x74)
                            
                            if ((edi_3 | edx_21) == 0 || (ecx_16 u<= edx_21
                                    && (ecx_16 u< edx_21 || newFilePointer_1 u<= edi_3)))
                                bool cond:7_1 = arg1 == 0
                                *(esi_9 + 0x78) = newFilePointer_1
                                *(esi_9 + 0x7c) = ecx_16
                                int32_t eax_58
                                
                                if (not(cond:7_1))
                                    int32_t var_1c_19 = 0
                                    int32_t var_20_10 = ecx_16
                                    int32_t ecx_18 = *(esi_9 + 0x20)
                                    eax_58 = sub_5c5310(esi_9, edx_21, ecx_18, ecx_18, newFilePointer_1)
                                
                                if (cond:7_1 || eax_58 s>= 0)
                                    return 0
                                
                                return 0xffffffff
                else
                    if (eax_44 == 1)
                        int32_t eax_56 = *(esi_9 + 0x78)
                        newFilePointer_1 = eax_56 + *arg2
                        ecx_16 = adc.d(*(esi_9 + 0x7c), *(arg2 + 4), eax_56 + *arg2 u< eax_56)
                        goto label_5c571f
                    
                    if (eax_44 == 2)
                        int32_t eax_48 = *(esi_9 + 0x70)
                        int32_t ecx_14 = *(esi_9 + 0x74)
                        int32_t edi_2 = eax_48 | ecx_14
                        
                        if (edi_2 != 0)
                            newFilePointer_1 = eax_48 + *arg2
                            ecx_16 = adc.d(ecx_14, *(arg2 + 4), eax_48 + *arg2 u< eax_48)
                            goto label_5c571f
                        
                        int32_t ecx_15 = *(arg2 + 4)
                        HANDLE edx_20 = *arg2
                        int32_t var_1c_18 = ecx_15
                        HANDLE var_20_8 = edx_20
                        
                        if (sub_5c4f70(edi_2 + 2, esi_9, edx_20, ecx_15, *(esi_9 + 0x20)) s< 0)
                            return 0xffffffff
                        
                        int32_t var_24_9 = 0
                        
                        if (SetFilePointerEx(*(esi_9 + 0x20), 0, &newFilePointer, FILE_CURRENT) != 0)
                            newFilePointer_1 = newFilePointer
                            int32_t var_8
                            ecx_16 = var_8
                            arg1 = 0
                            goto label_5c571f
                        
                        var_1c_1 = sub_5c4bd0(GetLastError())
                        var_20_1 = 4
                        var_24_1 = esi_9
                        goto label_5c592f
                var_1c_1 = NO_ERROR
                var_20_1 = 0x12
                var_24_1 = esi_9
                goto label_5c592f
        case 7
            uint32_t ecx_23 = arg1
            *(ecx_23 + 0x7c)
            return *(ecx_23 + 0x78)
        case 8
            uint32_t esi_1 = arg1
            
            if (*(esi_1 + 0x1c) != 0)
                int32_t eax_2
                int32_t edx_1
                edx_1:eax_2 = sx.q(sub_5c4cb0(esi_1))
                return eax_2
            
            var_1c_1 = NO_ERROR
            var_20_1 = 0x1c
            var_24_1 = esi_1
            goto label_5c592f
        case 9
            uint32_t esi_2 = arg1
            
            if (CloseHandle(*(esi_2 + 0x84)) == 0)
                *(esi_2 + 0x84) = 0xffffffff
                zip_error_set(esi_2, 6, sub_5c4bd0(GetLastError()))
            
            void* ecx_1 = *(esi_2 + 0x18)
            *(esi_2 + 0x84) = 0xffffffff
            
            if ((*(ecx_1 + 0xc))(esi_2) s< 0)
                zip_error_set(esi_2, 2, sub_5c4bd0(GetLastError()))
                return 0xffffffff
            
            __free_base(*(esi_2 + 0x80))
            *(esi_2 + 0x80) = 0
            return 0
        case 0xa
            uint32_t esi_8 = arg1
            HANDLE hObject_1 = *(esi_8 + 0x84)
            
            if (hObject_1 != 0)
                CloseHandle(hObject_1)
                *(esi_8 + 0x84) = 0xffffffff
            
            (*(*(esi_8 + 0x18) + 0x10))(*(esi_8 + 0x80))
            __free_base(*(esi_8 + 0x80))
            *(esi_8 + 0x80) = 0
            return 0
        case 0xb
            uint32_t edi_6 = arg1
            BOOL eax_80 = WriteFile(*(edi_6 + 0x84), arg2, arg3, &arg1, nullptr)
            uint32_t eax_81
            
            if (eax_80 != 0)
                eax_81 = arg1
            
            if (eax_80 != 0 && eax_81 == arg3 && 0 == arg4)
                return eax_81
            
            var_1c_1 = sub_5c4bd0(GetLastError())
            var_20_1 = 6
            var_24_1 = edi_6
            goto label_5c592f
        case 0xc
            if (arg4 u> 0 || (arg4 u>= 0 && arg3 u>= 0x10))
                if (arg2 == 0)
                    return 0xffffffff
                
                HANDLE edx_23 = *arg2
                uint32_t esi_10 = arg1
                int32_t var_1c_20 = *(arg2 + 4)
                int32_t ecx_20 = *(esi_10 + 0x84)
                HANDLE var_20_11 = edx_23
                
                if (sub_5c4f70(*(arg2 + 8), esi_10, edx_23, ecx_20, ecx_20) s>= 0)
                    return 0
                
                return 0xffffffff
        case 0xd
            uint32_t esi_14 = arg1
            int32_t var_24_12 = 0
            
            if (SetFilePointerEx(*(esi_14 + 0x84), 0, &newFilePointer, FILE_CURRENT) != 0)
                return newFilePointer
            
            var_1c_1 = sub_5c4bd0(GetLastError())
            var_20_1 = 0x1e
            var_24_1 = esi_14
            goto label_5c592f
        case 0xe
            uint32_t ecx_22 = arg1
            *(ecx_22 + 0x14)
            return *(ecx_22 + 0x10)
        case 0xf
            uint32_t esi_7 = arg1
            
            if ((*(*(esi_7 + 0x18) + 0x10))(*(esi_7 + 0x1c)) s>= 0)
                return 0
            
            var_1c_1 = sub_5c4bd0(GetLastError())
            var_20_1 = 0x16
            var_24_1 = esi_7
            goto label_5c592f
    
    var_1c_1 = NO_ERROR
    var_20_1 = 0x12
    var_24_1 = arg1
    goto label_5c592f
}
