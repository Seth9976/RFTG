// 函数名称: sub_5b93bb
// 虚拟地址: 0x5b93bb
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5b93bb(int32_t* arg1, int32_t* arg2, PSTR arg3, char arg4, int32_t arg5, char arg6)
{
    // 第一条实际指令: int32_t var_28 = 0
    int32_t var_28 = 0
    char var_6 = 0
    int32_t result_1 = 0
    SECURITY_ATTRIBUTES securityAttributes
    securityAttributes.nLength = 0xc
    securityAttributes.lpSecurityDescriptor = 0
    char var_5
    
    if ((arg4 & 0x80) == 0)
        securityAttributes.bInheritHandle = 1
        var_5 = 0
    else
        securityAttributes.bInheritHandle = 0
        var_5 = 0x10
    
    if (sub_5bb0c4(&var_28) != 0)
        int32_t var_50_8
        __builtin_memset(&var_50_8, 0, 0x14)
        sub_5ad34e()
        noreturn
    
    if ((arg4.d & 0x8000) == 0 && ((arg4.d & 0x74000) != 0 || var_28 != 0x8000))
        var_5 |= 0x80
    
    int32_t eax_2 = arg4.d & 3
    uint32_t dwDesiredAccess
    
    if (eax_2 == 0)
        dwDesiredAccess = 0x80000000
    else
        if (eax_2 != 1)
            if (eax_2 == 2)
                goto label_5b945d
            
        label_5b9442:
            *___doserrno() = 0
            *arg1 = 0xffffffff
            *__errno() = 0x16
            __invalid_parameter_noinfo()
            return 0x16
        
        if ((arg4 & 8) == 0 || (arg4.d & 0x70000) == 0)
            dwDesiredAccess = 0x40000000
        else
        label_5b945d:
            dwDesiredAccess = 0xc0000000
    
    enum FILE_SHARE_MODE dwShareMode
    
    if (arg5 == 0x10)
        dwShareMode = FILE_SHARE_NONE
    else if (arg5 == 0x20)
        dwShareMode = FILE_SHARE_READ
    else if (arg5 == 0x30)
        dwShareMode = FILE_SHARE_WRITE
    else if (arg5 == 0x40)
        dwShareMode = FILE_SHARE_READ | FILE_SHARE_WRITE
    else
        if (arg5 != 0x80)
            goto label_5b9442
        
        enum FILE_SHARE_MODE dwShareMode_1
        dwShareMode_1.b = dwDesiredAccess == 0x80000000
        dwShareMode = dwShareMode_1
    
    int32_t eax_14 = arg4.d & 0x700
    int32_t edi
    int32_t var_40_1 = edi
    enum FILE_CREATION_DISPOSITION dwCreationDisposition
    
    if (eax_14 s<= 0x400)
        if (eax_14 == 0x400 || eax_14 == 0)
            dwCreationDisposition = OPEN_EXISTING
            goto label_5b954f
        
        if (eax_14 == 0x100)
            dwCreationDisposition = OPEN_ALWAYS
            goto label_5b954f
        
        if (eax_14 == 0x200)
            goto label_5b953f
        
        if (eax_14 != 0x300)
            goto label_5b9524
        
        dwCreationDisposition = CREATE_ALWAYS
        goto label_5b954f
    
    int32_t result
    
    if (eax_14 == 0x500)
    label_5b9548:
        dwCreationDisposition = CREATE_NEW
    label_5b954f:
        int32_t eax_17 = arg4.d
        enum FILE_FLAGS_AND_ATTRIBUTES dwFlagsAndAttributes = FILE_ATTRIBUTE_NORMAL
        
        if ((0x100 & eax_17) != 0 && ((not.d(data_bec588)).b & arg6) s>= 0)
            dwFlagsAndAttributes = FILE_ATTRIBUTE_READONLY
        
        if ((eax_17.b & 0x40) != 0)
            dwFlagsAndAttributes |= FILE_FLAG_DELETE_ON_CLOSE
            dwDesiredAccess |= 0x10000
            dwShareMode |= FILE_SHARE_DELETE
        
        if ((eax_17 & 0x1000) != 0)
            dwFlagsAndAttributes |= FILE_ATTRIBUTE_TEMPORARY
        
        if ((eax_17.b & 0x20) != 0)
            dwFlagsAndAttributes |= FILE_FLAG_SEQUENTIAL_SCAN
        else if ((eax_17.b & 0x10) != 0)
            dwFlagsAndAttributes |= FILE_FLAG_RANDOM_ACCESS
        
        int32_t eax_18 = sub_5afb3a()
        *arg1 = eax_18
        
        if (eax_18 != 0xffffffff)
            *arg2 = 1
            HANDLE eax_23 = CreateFileA(arg3, dwDesiredAccess, dwShareMode, &securityAttributes, 
                dwCreationDisposition, dwFlagsAndAttributes, nullptr)
            HANDLE var_24_1 = eax_23
            
            if (eax_23 != 0xffffffff)
            label_5b967a:
                enum FILE_TYPE eax_32 = GetFileType(var_24_1)
                
                if (eax_32 != FILE_TYPE_UNKNOWN)
                    if (eax_32 == FILE_TYPE_CHAR)
                        var_5 |= 0x40
                    else if (eax_32 == FILE_TYPE_PIPE)
                        var_5 |= 8
                    
                    sub_5af904(*arg1, var_24_1)
                    int32_t eax_39 = *arg1
                    char ecx_8 = var_5 | 1
                    *((&data_3166ee0)[eax_39 s>> 5] + ((eax_39 & 0x1f) << 6) + 4) = ecx_8
                    int32_t eax_42 = *arg1
                    int32_t edx_6 = (&data_3166ee0)[eax_42 s>> 5]
                    *(edx_6 + ((eax_42 & 0x1f) << 6) + 0x24) &= 0x80
                    char temp8_1 = ecx_8 & 0x48
                    
                    if (temp8_1 != 0)
                    label_5b97ab:
                        
                        if ((ecx_8 & 0x80) == 0)
                            goto label_5b99dd
                        
                        if ((arg4.d & 0x74000) == 0)
                            int32_t eax_54 = var_28 & 0x74000
                            
                            if (eax_54 != 0)
                                arg4.d |= eax_54
                            else
                                arg4.d |= 0x4000
                        
                        int32_t eax_56 = arg4.d & 0x74000
                        
                        if (eax_56 == 0x4000)
                            var_6 = 0
                        else if (eax_56 == 0x10000 || eax_56 == 0x14000)
                            if ((arg4.d & 0x301) == 0x301)
                                var_6 = 2
                        else if (eax_56 == 0x20000 || eax_56 == 0x24000)
                            var_6 = 2
                        else if (eax_56 == 0x40000 || eax_56 == 0x44000)
                            var_6 = 1
                        
                        if ((arg4.d & 0x70000) == 0)
                            goto label_5b99dd
                        
                        int32_t var_20 = 0
                        
                        if ((ecx_8 & 0x40) != 0)
                            goto label_5b99dd
                        
                        int32_t eax_58 = dwDesiredAccess & 0xc0000000
                        enum FILE_CREATION_DISPOSITION dwCreationDisposition_1
                        uint32_t eax_70
                        
                        if (eax_58 == 0x40000000)
                            dwCreationDisposition_1 = dwCreationDisposition
                            
                            if (dwCreationDisposition_1 u<= 0)
                                goto label_5b99dd
                            
                            if (dwCreationDisposition_1 u<= CREATE_ALWAYS)
                            label_5b9882:
                                int32_t eax_59 = sx.d(var_6)
                                void* edi_3 = nullptr
                                int32_t var_44_7
                                
                                if (eax_59 == 1)
                                    var_20 = 0xbfbbef
                                    var_44_7 = 3
                                else
                                    if (eax_59 != 2)
                                        goto label_5b99dd
                                    
                                    var_20 = 0xfeff
                                    var_44_7 = 2
                                
                                while (true)
                                    int32_t __saved_ebp
                                    void* eax_78
                                    eax_78, edx_6 =
                                        sub_5b03d0(*arg1, &__saved_ebp + edi_3 - 0x1c, var_44_7 - edi_3)
                                    
                                    if (eax_78 == 0xffffffff)
                                        break
                                    
                                    edi_3 += eax_78
                                    
                                    if (var_44_7 s<= edi_3)
                                        goto label_5b99dd
                                
                                sub_5b1f0f(*arg1)
                                result_1 = *__errno()
                            else
                                if (dwCreationDisposition_1 u> OPEN_ALWAYS)
                                label_5b9879:
                                    
                                    if (dwCreationDisposition_1 != TRUNCATE_EXISTING)
                                        goto label_5b99dd
                                    
                                    goto label_5b9882
                                
                                uint32_t eax_67
                                int32_t ecx_12
                                eax_67, ecx_12, edx_6 = sub_5b5e2f(dwCreationDisposition_1, edx_6, 
                                    0xc0000000, *arg1, 0, 0, FILE_END)
                                int32_t eax_68 = eax_67 | edx_6
                                
                                if (eax_68 == 0)
                                    goto label_5b9882
                                
                                uint32_t eax_69
                                eax_69, edx_6 =
                                    sub_5b5e2f(eax_68, edx_6, ecx_12, *arg1, 0, 0, FILE_BEGIN)
                                eax_70 = eax_69 & edx_6
                            label_5b9947:
                                
                                if (eax_70 != 0xffffffff)
                                    goto label_5b99dd
                                
                                sub_5b1f0f(*arg1)
                                result_1 = *__errno()
                        else if (eax_58 == 0x80000000)
                        label_5b98d5:
                            int32_t eax_66
                            eax_66, edx_6 = sub_5b3dcf(*arg1, &var_20, 3)
                            
                            if (eax_66 == 0xffffffff)
                                sub_5b1f0f(*arg1)
                                result_1 = *__errno()
                            else if (eax_66 == 2)
                            label_5b9957:
                                uint32_t eax_72 = zx.d(var_20.w)
                                
                                if (eax_72 != 0xfffe)
                                    if (eax_72 != 0xfeff)
                                        goto label_5b99a3
                                    
                                    uint32_t eax_74
                                    eax_74, edx_6 = sub_5b3c86(*arg1, 2, FILE_BEGIN)
                                    
                                    if (eax_74 != 0xffffffff)
                                        var_6 = 2
                                        goto label_5b99dd
                                    
                                    sub_5b1f0f(*arg1)
                                    result_1 = *__errno()
                                else
                                    sub_5b1f0f(*arg1)
                                    *__errno() = 0x16
                                    result_1 = 0x16
                            else
                                if (eax_66 != 3)
                                label_5b99a3:
                                    eax_70, edx_6 = sub_5b3c86(*arg1, 0, FILE_BEGIN)
                                    goto label_5b9947
                                
                                if (var_20 != 0xbfbbef)
                                    goto label_5b9957
                                
                                var_6 = 1
                            label_5b99dd:
                                int32_t eax_79 = *arg1
                                char* eax_82 =
                                    (&data_3166ee0)[eax_79 s>> 5] + ((eax_79 & 0x1f) << 6) + 0x24
                                int32_t ecx_16
                                ecx_16.b = *eax_82
                                ecx_16.b ^= var_6
                                ecx_16.b &= 0x7f
                                *eax_82 ^= ecx_16.b
                                int32_t eax_83 = *arg1
                                char* eax_86 =
                                    (&data_3166ee0)[eax_83 s>> 5] + ((eax_83 & 0x1f) << 6) + 0x24
                                edx_6.b = *eax_86
                                edx_6.b &= 0x7f
                                *eax_86 = (arg4.d u>> 0x10).b << 7 | edx_6.b
                                
                                if (temp8_1 == 0 && (arg4 & 8) != 0)
                                    int32_t eax_87 = *arg1
                                    char* eax_90 =
                                        (&data_3166ee0)[eax_87 s>> 5] + ((eax_87 & 0x1f) << 6) + 4
                                    *eax_90 |= 0x20
                                
                                if ((dwDesiredAccess & 0xc0000000) == 0xc0000000 && (arg4 & 1) != 0)
                                    CloseHandle(var_24_1)
                                    HANDLE eax_93 = CreateFileA(arg3, dwDesiredAccess & 0x7fffffff, 
                                        dwShareMode, &securityAttributes, OPEN_EXISTING, 
                                        dwFlagsAndAttributes, nullptr)
                                    
                                    if (eax_93 != 0xffffffff)
                                        int32_t esi_8 = *arg1
                                        *(((esi_8 & 0x1f) << 6) + (&data_3166ee0)[esi_8 s>> 5]) = eax_93
                                    else
                                        ___acrt_errno_map_os_error(GetLastError())
                                        int32_t eax_95 = *arg1
                                        char* eax_98 =
                                            (&data_3166ee0)[eax_95 s>> 5] + ((eax_95 & 0x1f) << 6) + 4
                                        *eax_98 &= 0xfe
                                        sub_5af985(*arg1)
                                        result_1 = *__errno()
                        else
                            if (eax_58 != 0xc0000000)
                                goto label_5b99dd
                            
                            dwCreationDisposition_1 = dwCreationDisposition
                            
                            if (dwCreationDisposition_1 u<= 0)
                                goto label_5b99dd
                            
                            if (dwCreationDisposition_1 u<= CREATE_ALWAYS)
                                goto label_5b9882
                            
                            if (dwCreationDisposition_1 u> OPEN_ALWAYS)
                                goto label_5b9879
                            
                            uint32_t eax_62
                            int32_t ecx_11
                            eax_62, ecx_11, edx_6 = sub_5b5e2f(dwCreationDisposition_1, edx_6, 
                                0xc0000000, *arg1, 0, 0, FILE_END)
                            int32_t eax_63 = eax_62 | edx_6
                            
                            if (eax_63 == 0)
                                goto label_5b9882
                            
                            uint32_t eax_64
                            int32_t edx_8
                            eax_64, edx_8 = sub_5b5e2f(eax_63, edx_6, ecx_11, *arg1, 0, 0, FILE_BEGIN)
                            
                            if ((eax_64 & edx_8) != 0xffffffff)
                                goto label_5b98d5
                            
                            sub_5b1f0f(*arg1)
                            result_1 = *__errno()
                    else
                        if ((ecx_8 & 0x80) == 0)
                            goto label_5b99dd
                        
                        if ((arg4 & 2) == 0)
                            goto label_5b97ab
                        
                        uint32_t eax_46 = sub_5b3c86(*arg1, 0xffffffff, FILE_END)
                        
                        if (eax_46 != 0xffffffff)
                            int32_t var_4c_4 = *arg1
                            char var_8 = 0
                            
                            if (sub_5b3dcf(var_4c_4, &var_8, 1) != 0 || var_8 != 0x1a)
                            label_5b979f:
                                uint32_t eax_52
                                eax_52, edx_6 = sub_5b3c86(*arg1, 0, FILE_BEGIN)
                                
                                if (eax_52 != 0xffffffff)
                                    goto label_5b97ab
                                
                                sub_5b1f0f(*arg1)
                                result_1 = *__errno()
                            else
                                int32_t eax_50
                                int32_t edx_7
                                edx_7:eax_50 = sx.q(eax_46)
                                
                                if (sub_5bb5e4(*arg1, eax_50, edx_7) != 0xffffffff)
                                    goto label_5b979f
                                
                                sub_5b1f0f(*arg1)
                                result_1 = *__errno()
                        else
                            void* eax_47
                            eax_47, edx_6 = ___doserrno()
                            
                            if (*eax_47 == 0x83)
                                goto label_5b97ab
                            
                            sub_5b1f0f(*arg1)
                            result_1 = *__errno()
                else
                    int32_t esi_4 = *arg1
                    char* eax_36 = (&data_3166ee0)[esi_4 s>> 5] + ((esi_4 & 0x1f) << 6) + 4
                    *eax_36 &= 0xfe
                    enum WIN32_ERROR eax_37 = GetLastError()
                    ___acrt_errno_map_os_error(eax_37)
                    CloseHandle(var_24_1)
                    
                    if (eax_37 == NO_ERROR)
                        *__errno() = 0xd
                    
                    result_1 = *__errno()
            else
                if ((dwDesiredAccess & 0xc0000000) == 0xc0000000 && (arg4 & 1) != 0)
                    dwDesiredAccess &= 0x7fffffff
                    HANDLE eax_24 = CreateFileA(arg3, dwDesiredAccess, dwShareMode, 
                        &securityAttributes, dwCreationDisposition, dwFlagsAndAttributes, nullptr)
                    var_24_1 = eax_24
                    
                    if (eax_24 != 0xffffffff)
                        goto label_5b967a
                
                int32_t esi_1 = *arg1
                char* eax_28 = (&data_3166ee0)[esi_1 s>> 5] + ((esi_1 & 0x1f) << 6) + 4
                *eax_28 &= 0xfe
                ___acrt_errno_map_os_error(GetLastError())
                result_1 = *__errno()
            
            result = result_1
        else
            *___doserrno() = 0
            *arg1 = 0xffffffff
            *__errno() = 0x18
            result = *__errno()
    else
        if (eax_14 == 0x600)
        label_5b953f:
            dwCreationDisposition = TRUNCATE_EXISTING
            goto label_5b954f
        
        if (eax_14 == 0x700)
            goto label_5b9548
        
    label_5b9524:
        *___doserrno() = 0
        *arg1 = 0xffffffff
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        result = 0x16
    
    return result
}
