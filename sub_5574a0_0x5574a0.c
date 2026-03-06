// 函数名称: sub_5574a0
// 虚拟地址: 0x5574a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t* __fastcallsub_5574a0(char* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_68f39e
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    void var_15c
    int32_t eax_2 = __security_cookie ^ &var_15c
    int32_t __saved_edi
    int32_t var_16c = __security_cookie ^ &__saved_edi
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_170 = 0x128
    char* var_174 = nullptr
    int32_t var_170_1 = 3
    int32_t var_148
    var_174 = sub_5abfc0(&var_148, var_174.b, var_170)
    int32_t var_c_1 = 0
    char** var_14c = &var_174
    
    if (arg1 == 0)
        sub_4c5870("str", &data_83f3d3, "xString.cpp", 0x8f, "XString::XString")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    sub_4c42b0(&var_174, arg1)
    void var_154
    void* var_170_2 = &var_154
    var_c_1.b = 1
    bool eax_7 = sub_554e10(&var_148, sub_500300(&var_154, var_174))
    int32_t* result
    char* var_150
    void var_2c
    
    if (eax_7 != 0)
        int32_t var_144
        
        if (var_144 != 3)
            if (var_144 != 1)
                goto label_55764c
            
            goto label_557629
        
        if (sub_5551f0(&var_148) == 0 || var_144 != 1)
        label_55764c:
            var_c_1.b = 0
            char* eax_20 = var_150
            
            if (eax_20 != 0 && *eax_20 != 0)
                void* eax_22 = sub_4c4060(&var_150)
                int32_t temp1_1 = *(eax_22 + 4)
                *(eax_22 + 4) -= 1
                
                if (temp1_1 == 1)
                    int32_t esi_4 = *(eax_22 + 0xc) + 0x10
                    sub_4f4430(eax_22, sub_4f4380(esi_4), esi_4)
            
            int32_t var_c_4 = 3
            int32_t eax_25 = var_148
            
            if (eax_25 != 0)
                _aligned_free_base(eax_25)
            
            sub_567fd0(&var_2c)
            int32_t* var_170_11 = &var_2c
            var_148 = 0
            int32_t var_c_5 = 0xffffffff
            sub_567fd0(var_170_11)
            result.b = 0
        else
        label_557629:
            char* var_13c
            var_174 = var_13c
            int32_t var_138
            
            if (sub_5a9f0b("Root", var_174, var_138) != 0)
                goto label_55764c
            
            if (sub_5551f0(&var_148) == 0)
                goto label_55764c
            
            if (var_144 != 3)
                if (var_144 != 1)
                    goto label_557717
                
                goto label_5576f8
            
            if (sub_5551f0(&var_148) == 0 || var_144 != 1)
            label_557717:
                var_c_1.b = 0
                char* eax_32 = var_150
                
                if (eax_32 != 0 && *eax_32 != 0)
                    void* eax_34 = sub_4c4060(&var_150)
                    int32_t temp2_1 = *(eax_34 + 4)
                    *(eax_34 + 4) -= 1
                    
                    if (temp2_1 == 1)
                        int32_t esi_6 = *(eax_34 + 0xc) + 0x10
                        sub_4f4430(eax_34, sub_4f4380(esi_6), esi_6)
                
                int32_t var_c_6 = 0xffffffff
                goto label_5579c7
            
        label_5576f8:
            var_174 = var_13c
            
            if (sub_5a9f0b("VERSION", var_174, var_138) != 0)
                goto label_557717
            
            if (sub_5551f0(&var_148) == 0)
                goto label_557717
            
            if (var_144 != 3)
                goto label_5579ab
            
            char*** var_170_14 = &var_14c
            var_174 = &data_85f660
            
            if (sub_5a957c(var_13c, var_174) != 1)
                goto label_5579ab
            
            if (sub_5551f0(&var_148) == 0)
                goto label_5579ab
            
            if (var_14c != 2)
                goto label_557a56
            
            int32_t* esi_7 = &var_148
            
            if (sub_5552d0(esi_7, "VERSION") == 0)
                goto label_55794a
            
            if (sub_555280(esi_7, "BONELIST") == 0)
                goto label_5579ab
            
            arg2[1] = 0
            int128_t* eax_42 = sub_4ccf00(0xc00)
            arg2[2] = eax_42
            sub_4fedb0("Root[0]", eax_42 + 4)
            *eax_42 = sub_519130("Root[0]")
            arg2[1] += 1
            char* const var_158
            char* const* ecx_8
            char* const* ecx_14
            
            if (sub_5552d0(&var_148, "BONELIST") == 0)
                while (true)
                    if (sub_555280(&var_148, "BONE") == 0)
                        goto label_5579ab
                    
                    var_158 = &data_83f3d3
                    var_c_1.b = 4
                    
                    if (sub_555320(&var_158, &var_148) == 0)
                        var_c_1.b = 1
                        ecx_14 = &var_158
                        goto label_557a4d
                    
                    int32_t eax_49 = arg2[1]
                    
                    if (eax_49 s>= 0x100)
                        goto label_557939
                    
                    char* const esi_11 = var_158
                    int32_t* edi_8 = arg2[2] + eax_49 * 0xc
                    int32_t eax_50
                    
                    if (esi_11 == 0 || *esi_11 == 0)
                        eax_50 = 0
                    else
                        eax_50 = *(sub_4c4060(&var_158) + 8)
                    
                    char* eax_54 = sub_4cce80(eax_50 + 1)
                    edi_8[1] = eax_54
                    char* const ecx_7 = &data_83f3d3
                    
                    if (esi_11 != 0)
                        ecx_7 = esi_11
                    
                    char* edx_3 = eax_54
                    
                    do
                        eax_54.b = *ecx_7
                        *edx_3 = eax_54.b
                        ecx_7 = &ecx_7[1]
                        edx_3 = &edx_3[1]
                    while (eax_54.b != 0)
                    
                    char const* const var_170_20 = "BONE"
                    int32_t* esi_12 = &var_148
                    *edi_8 = sub_519130(edi_8[1])
                    ecx_8 = &var_158
                    
                    if (sub_5552d0(esi_12, var_170_20) == 0)
                        break
                    
                    arg2[1] += 1
                    var_c_1.b = 1
                    sub_4c43d0(ecx_8)
                    
                    if (sub_5552d0(esi_12, "BONELIST") != 0)
                        goto label_557906
                
                goto label_55799a
            
        label_557906:
            
            if (sub_555280(&var_148, "DATA") == 0)
                goto label_557a56
            
            var_158 = &data_83f3d3
            var_c_1.b = 5
            char eax_61
            int32_t edx_4
            eax_61, edx_4 = sub_555320(&var_158, &var_148)
            
            if (eax_61 != 0)
                char* const eax_63 = var_158
                
                if (eax_63 == 0)
                    eax_63 = &data_83f3d3
                
                sub_556a40(eax_63, edx_4, arg2, eax_63)
                
                if (sub_5552d0(&var_148, "DATA") != 0)
                    var_c_1.b = 1
                    ecx_14 = &var_158
                    
                    if (sub_5552d0(&var_148, "Root") == 0)
                    label_557a4d:
                        sub_4c43d0(ecx_14)
                    label_557a56:
                        var_c_1.b = 0
                        sub_521920(&var_154)
                        int32_t var_c_10 = 0xffffffff
                        sub_554da0(&var_148)
                        result.b = 0
                    else
                        sub_4c43d0(ecx_14)
                        var_c_1.b = 0
                        sub_521920(&var_154)
                        int32_t var_c_9 = 0xffffffff
                        sub_554da0(&var_148)
                        result.b = 1
                else
                    ecx_8 = &var_158
                label_55799a:
                    var_c_1.b = 1
                    sub_4c43d0(ecx_8)
                label_5579ab:
                    var_c_1.b = 0
                    sub_521920(&var_154)
                    int32_t var_c_8 = 0xffffffff
                label_5579c7:
                    sub_554da0(&var_148)
                    result.b = 0
            else
            label_557939:
                var_c_1.b = 1
                sub_4c43d0(&var_158)
            label_55794a:
                var_c_1.b = 0
                sub_521920(&var_154)
                int32_t var_c_7 = 0xffffffff
                sub_554da0(&var_148)
                result.b = 0
    else
        var_c_1.b = eax_7
        char* eax_8 = var_150
        
        if (eax_8 != 0 && *eax_8 != 0)
            void* eax_10 = sub_4c4060(&var_150)
            int32_t temp0_1 = *(eax_10 + 4)
            *(eax_10 + 4) -= 1
            
            if (temp0_1 == 1)
                int32_t esi_2 = *(eax_10 + 0xc) + 0x10
                sub_4f4430(eax_10, sub_4f4380(esi_2), esi_2)
        
        int32_t var_c_2 = 2
        int32_t eax_13 = var_148
        
        if (eax_13 != 0)
            _aligned_free_base(eax_13)
        
        sub_567fd0(&var_2c)
        void* var_170_6 = &var_2c
        var_148 = 0
        int32_t var_c_3 = 0xffffffff
        sub_567fd0(var_170_6)
        result.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_15c)
    return result
}
