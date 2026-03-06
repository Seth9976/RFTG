// 函数名称: sub_5204e0
// 虚拟地址: 0x5204e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD**sub_5204e0(void* arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68edc0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_48 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (data_8bc5ff != 0)
        char* const eax_4 = *(arg1 + 0x20)
        
        if (eax_4 == 0)
            eax_4 = &data_83f3d3
        
        char* var_14
        int32_t edx
        char** eax_5 = sub_51f490(eax_4, edx, eax_4, &var_14)
        int32_t var_8_1 = 0
        int32_t var_38 = 0
        int32_t var_34_1 = 0
        int32_t var_30_1 = 0
        var_8_1.b = 1
        char* edx_1 = var_14
        
        if (edx_1 == 0)
            edx_1 = &data_83f3d3
        
        if (sub_4d0220(eax_5, edx_1, &var_38, 1) == 0)
            var_8_1.b = 0
            sub_4d0770(&var_38)
            int32_t var_8_2 = 0xffffffff
            char* eax_7 = var_14
            
            if (eax_7 != 0 && *eax_7 != 0)
                eax_7 = sub_4c4060(&var_14)
                int32_t temp0_1 = *(eax_7 + 4)
                *(eax_7 + 4) -= 1
                
                if (temp0_1 == 1)
                    int32_t esi_3 = *(eax_7 + 0xc) + 0x10
                    sub_4f4430(eax_7, sub_4f4380(esi_3), esi_3)
            
            eax_7.b = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_7
        
        if (var_30_1 != 1)
            goto label_5205c3
        
        void* eax_13 = sub_520e80(&var_38)
        char* ecx_9 = *(arg1 + 4)
        char* var_4c_6 = ecx_9
        char* var_50 = ecx_9
        char* ecx_10 = *(arg1 + 0x20)
        int32_t* var_28_1 = &var_50
        var_50 = ecx_10
        
        if (ecx_10 != 0 && *ecx_10 != 0)
            void* eax_15 = sub_4c4060(&var_50)
            *(eax_15 + 4) += 1
        
        char* lpFileName_1
        sub_51f6d0(&lpFileName_1, var_50)
        var_8_1.b = 2
        char* const lpFileName = lpFileName_1
        
        if (lpFileName == 0)
            lpFileName = &data_83f3d3
        
        if (GetFileAttributesA(lpFileName) != 0xffffffff)
            char* const lpFileName_2 = lpFileName_1
            
            if (lpFileName_2 == 0)
                lpFileName_2 = &data_83f3d3
            
            BOOL var_2c
            
            if (sub_4c5c00(&var_2c, lpFileName_2) == 0)
                var_8_1.b = 1
                sub_4c43d0(&lpFileName_1)
                var_8_1.b = 0
                sub_4d0770(&var_38)
                int32_t var_8_4 = 0xffffffff
                sub_4c43d0(&var_14)
                int32_t* eax_18
                eax_18.b = 1
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_18
            
            if (var_2c != *(eax_13 + 0x18) || var_28_1 != *(eax_13 + 0x1c))
                var_8_1.b = 1
                sub_4c43d0(&lpFileName_1)
                var_8_1.b = 0
                sub_4d0770(&var_38)
                int32_t var_8_5 = 0xffffffff
                sub_4c43d0(&var_14)
                int32_t* eax_20
                eax_20.b = 1
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_20
            
            char* ecx_20 = *(arg1 + 4)
            char* var_4c_11 = ecx_20
            var_50 = ecx_20
            char** var_28_2 = &var_50
            sub_4c4300(&var_50, arg1 + 0x20)
            char* var_1c
            sub_51fbc0(&var_1c, var_50)
            var_8_1.b = 3
            char* eax_22 = var_1c
            
            if (eax_22 != 0 && *eax_22 != 0)
                var_2c = 0
                var_28_2 = nullptr
                sub_4c5c00(&var_2c, eax_22)
            
            int32_t* var_4c_5
            
            if (eax_22 != 0 && *eax_22 != 0
                    && (var_2c != *(eax_13 + 0x20) || var_28_2 != *(eax_13 + 0x24)))
                var_8_1.b = 2
                sub_4c43d0(&var_1c)
                var_8_1.b = 1
                sub_4c43d0(&lpFileName_1)
            label_5205c3:
                var_4c_5 = &var_38
            label_5205c4:
                var_8_1.b = 0
                sub_4d0770(var_4c_5)
                int32_t var_8_3 = 0xffffffff
                sub_4c43d0(&var_14)
                int32_t* eax_12
                eax_12.b = 1
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_12
            
            if (*(arg1 + 4) != 4)
                var_8_1.b = 2
                sub_4c43d0(&var_1c)
            else
                char* eax_24 = var_14
                
                if (eax_24 == 0)
                    eax_24 = &data_83f3d3
                
                char eax_25 = sub_4c5c00(&var_2c, eax_24)
                char eax_27
                
                if (eax_25 != 0)
                    char*** var_4c_14 = var_28_2
                    var_50 = var_2c
                    eax_27 = sub_520310(var_50, var_4c_14)
                
                if (eax_25 == 0 || eax_27 != 0)
                    var_8_1.b = 2
                    sub_4c43d0(&var_1c)
                    var_8_1.b = 1
                    sub_4c43d0(&lpFileName_1)
                    var_4c_5 = &var_38
                    goto label_5205c4
                
                var_8_1.b = 2
                sub_4c43d0(&var_1c)
        
        var_8_1.b = 1
        sub_4c43d0(&lpFileName_1)
        var_8_1.b = 0
        sub_4d0770(&var_38)
        int32_t var_8_6 = 0xffffffff
        sub_4c43d0(&var_14)
    
    struct _EXCEPTION_REGISTRATION_RECORD** eax_3
    eax_3.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3
}
