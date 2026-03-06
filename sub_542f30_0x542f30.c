// 函数名称: sub_542f30
// 虚拟地址: 0x542f30
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** __fastcallsub_542f30(char* arg1)
{
    // 第一条实际指令: int32_t var_c = 0xffffffff
    int32_t var_c = 0xffffffff
    int32_t (* var_10)(void* arg1) = sub_693159
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    void var_194
    int32_t eax_2 = __security_cookie ^ &var_194
    int32_t __saved_edi
    int32_t var_1a4 = __security_cookie ^ &__saved_edi
    struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* esi = data_3079208
    
    if (esi != 0)
        int32_t var_1a8_1 = esi[1]
        char* var_1ac = arg1
        char* ecx = esi[8]
        int32_t* var_18c = &var_1ac
        var_1ac = ecx
        
        if (ecx != 0 && *ecx != 0)
            void* eax_7 = sub_4c4060(&var_1ac)
            *(eax_7 + 4) += 1
        
        char* result_1
        sub_51f6d0(&result_1, var_1ac)
        int32_t var_c_1 = 0
        int32_t eax_8 = esi[1]
        char* var_190
        int32_t var_180
        char var_128[0x10c]
        char i
        
        if (eax_8 == 0x19)
            char* const result_2 = result_1
            
            if (result_2 == 0)
                result_2 = &data_83f3d3
            
            char* edx_1 = &var_128 - result_2
            
            do
                i = *result_2
                *(edx_1 + result_2) = i
                result_2 = &result_2[1]
            while (i != 0)
            
            int32_t var_1a8_2 = 0x58
            var_1ac = nullptr
            sub_5abfc0(&var_180, var_1ac.b, var_1a8_2)
            int32_t eax_9 = data_3078818
            int32_t* param0 = &var_180
            var_180 = 0x58
            int32_t var_17c_1 = eax_9
            char (* var_164_1)[0x10c] = &var_128
            int32_t var_160_1 = 0x104
            char const* const var_174_1 = "Particle (*.particle)"
            int32_t var_168_1 = 0
            int32_t var_15c_1 = 0
            int32_t var_158_1 = 0
            int32_t var_154_1 = 0
            char const* const var_150_1 = "Save Particle As"
            char const* const var_144_1 = "particle"
            int32_t var_14c_1 = 0x200000a
            BOOL eax_10
            int32_t edx_2
            eax_10, edx_2 = GetSaveFileNameA(param0)
            
            if (eax_10 != 0)
                int32_t edx_3 = sub_4c4330(&var_128, edx_2, &var_18c)
                var_c_1.b = 1
                int32_t* ecx_2 = var_18c
                
                if (ecx_2 == 0)
                    ecx_2 = &data_83f3d3
                
                sub_51ee80(&var_190, edx_3, ecx_2, &var_190)
                var_c_1.b = 2
                int128_t* edx_4 = *esi
                int128_t* var_1a8_4 = edx_4
                int32_t* eax_14 = sub_4ff520(*(data_30785d4 + 0x33c), edx_4)
                char* eax_15 = var_190
                
                if (eax_15 == 0)
                    eax_15 = &data_83f3d3
                
                char** eax_16
                char* ecx_4
                eax_16, ecx_4 = sub_509140(0x19, eax_15)
                
                if (esi == eax_16)
                    ecx_4 = sub_569430()
                    sub_508cd0(esi)
                
                int32_t* var_1a8_5 = eax_14
                var_1ac = ecx_4
                var_1ac = var_190
                char* ecx_6 = var_190
                char** var_184_1 = &var_1ac
                
                if (ecx_6 != 0 && *ecx_6 != 0)
                    void* eax_18 = sub_4c4060(&var_1ac)
                    *(eax_18 + 4) += 1
                
                sub_509b00()
                sub_56e600()
                sub_542a90(sub_56b9d0(eax_16))
                
                if (data_307881c == 0)
                    sub_56e480()
                
                var_c_1.b = 1
                goto label_54364b
        else
            char* ecx_18
            int32_t ebx
            
            if (eax_8 == 0x1b)
                char* result_3 = result_1
                
                if (result_3 == 0)
                    result_3 = &data_83f3d3
                
                int32_t edx_6 = &var_128 - result_3
                
                do
                    i = *result_3
                    result_3[edx_6] = i
                    result_3 = &result_3[1]
                while (i != 0)
                
                int32_t var_1a8_6 = 0x58
                var_1ac = nullptr
                sub_5abfc0(&var_180, var_1ac.b, var_1a8_6)
                int32_t eax_19 = data_3078818
                int32_t* param0_1 = &var_180
                var_180 = 0x58
                int32_t var_17c_2 = eax_19
                char (* var_164_2)[0x10c] = &var_128
                int32_t var_160_2 = 0x104
                char const* const var_174_2 = "Graph (*.graph)"
                int32_t var_168_2 = 0
                int32_t var_15c_2 = 0
                int32_t var_158_2 = 0
                int32_t var_154_2 = 0
                char const* const var_150_2 = "Save GRaph As"
                char const* const var_144_2 = "graph"
                int32_t var_14c_2 = 0x200000a
                BOOL eax_20
                int32_t edx_7
                eax_20, edx_7 = GetSaveFileNameA(param0_1)
                
                if (eax_20 != 0)
                    int32_t edx_8 = sub_4c4330(&var_128, edx_7, &var_18c)
                    ebx.b = 3
                    var_c_1.b = 3
                    char* ecx_11 = var_18c
                    
                    if (ecx_11 == 0)
                        ecx_11 = &data_83f3d3
                    
                    sub_51ee80(&var_190, edx_8, ecx_11, &var_190)
                    var_c_1.b = 4
                    int128_t* edx_9 = *esi
                    int128_t* var_1a8_8 = edx_9
                    int32_t* eax_24 = sub_4ff520(*(data_30785d4 + 0x37c), edx_9)
                    char* edx_10 = var_190
                    
                    if (edx_10 == 0)
                        edx_10 = &data_83f3d3
                    
                    char** eax_25
                    char* ecx_13
                    eax_25, ecx_13 = sub_509140(0x1b, edx_10)
                    sub_508cd0(eax_25)
                    int32_t* var_1a8_9 = eax_24
                    var_1ac = ecx_13
                    var_1ac = var_190
                    char* ecx_15 = var_190
                    char** var_184_2 = &var_1ac
                    
                    if (ecx_15 != 0 && *ecx_15 != 0)
                        void* eax_27 = sub_4c4060(&var_1ac)
                        *(eax_27 + 4) += 1
                    
                    sub_509b00()
                    sub_56e600()
                    ecx_18 = sub_56b9d0(eax_25)
                label_543636:
                    sub_542a90(ecx_18)
                    sub_56e480()
                    var_c_1.b = ebx.b
                label_54364b:
                    sub_4c43d0(&var_190)
                    var_c_1.b = 0
                    sub_4c43d0(&var_18c)
            else if (eax_8 == 0x1e)
                char* result_4 = result_1
                
                if (result_4 == 0)
                    result_4 = &data_83f3d3
                
                int32_t edx_11 = &var_128 - result_4
                
                do
                    i = *result_4
                    result_4[edx_11] = i
                    result_4 = &result_4[1]
                while (i != 0)
                
                int32_t var_1a8_10 = 0x58
                var_1ac = nullptr
                sub_5abfc0(&var_180, var_1ac.b, var_1a8_10)
                int32_t eax_28 = data_3078818
                int32_t* param0_2 = &var_180
                var_180 = 0x58
                int32_t var_17c_3 = eax_28
                char (* var_164_3)[0x10c] = &var_128
                int32_t var_160_3 = 0x104
                char const* const var_174_3 = "UI (*.ui)"
                int32_t var_168_3 = 0
                int32_t var_15c_3 = 0
                int32_t var_158_3 = 0
                int32_t var_154_3 = 0
                char const* const var_150_3 = "Save UI As"
                void* const var_144_3 = &data_881180
                int32_t var_14c_3 = 0x200000a
                BOOL eax_29
                int32_t edx_12
                eax_29, edx_12 = GetSaveFileNameA(param0_2)
                
                if (eax_29 != 0)
                    int32_t edx_13 = sub_4c4330(&var_128, edx_12, &var_18c)
                    ebx.b = 5
                    var_c_1.b = 5
                    char* ecx_20 = var_18c
                    
                    if (ecx_20 == 0)
                        ecx_20 = &data_83f3d3
                    
                    sub_51ee80(&var_190, edx_13, ecx_20, &var_190)
                    var_c_1.b = 6
                    int128_t* edx_14 = *esi
                    int128_t* var_1a8_12 = edx_14
                    int32_t* eax_33 = sub_4ff520(*(data_30785d4 + 0x3dc), edx_14)
                    char* edx_15 = var_190
                    
                    if (edx_15 == 0)
                        edx_15 = &data_83f3d3
                    
                    char** eax_34
                    char* ecx_22
                    eax_34, ecx_22 = sub_509140(0x1e, edx_15)
                    sub_508cd0(eax_34)
                    int32_t* var_1a8_13 = eax_33
                    var_1ac = ecx_22
                    char** var_184_3 = &var_1ac
                    sub_4c4300(&var_1ac, &var_190)
                    sub_509b00(var_1ac)
                    sub_56e600()
                    sub_56b9d0(eax_34)
                    int80_t st0_1
                    st0_1, ecx_18 = sub_5755c0(eax_34)
                    goto label_543636
            else if (eax_8 != 0x22)
                if (eax_8 != 0x20)
                    char const* const var_1a8_23 = "EditorSaveAs"
                    var_1ac = 0x15f7
                    sub_4c5870("Halt", &data_83f3d3, "Windows\EditorWindow.cpp", var_1ac, var_1a8_23)
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                char* result_6 = result_1
                
                if (result_6 == 0)
                    result_6 = &data_83f3d3
                
                int32_t edx_22 = &var_128 - result_6
                
                do
                    i = *result_6
                    result_6[edx_22] = i
                    result_6 = &result_6[1]
                while (i != 0)
                
                int32_t var_1a8_18 = 0x58
                var_1ac = nullptr
                sub_5abfc0(&var_180, var_1ac.b, var_1a8_18)
                int32_t ecx_33 = data_3078818
                int32_t* param0_4 = &var_180
                var_180 = 0x58
                int32_t var_17c_5 = ecx_33
                char (* var_164_5)[0x10c] = &var_128
                int32_t var_160_5 = 0x104
                char const* const var_174_5 = "Fab (*.fab)"
                int32_t var_168_5 = 0
                int32_t var_15c_5 = 0
                int32_t var_158_5 = 0
                int32_t var_154_5 = 0
                char const* const var_150_5 = "Save Fab As"
                void* const var_144_5 = &data_881180
                int32_t var_14c_5 = 0x200000a
                BOOL eax_44
                int32_t edx_23
                eax_44, edx_23 = GetSaveFileNameA(param0_4)
                
                if (eax_44 != 0)
                    char** eax_46 = sub_4c4330(&var_128, edx_23, &var_18c)
                    ebx.b = 9
                    var_c_1.b = 9
                    char* ecx_35 = var_18c
                    
                    if (ecx_35 == 0)
                        ecx_35 = &data_83f3d3
                    
                    int128_t* edx_25 = sub_51ee80(eax_46, &var_190, ecx_35, &var_190)
                    var_c_1.b = 0xa
                    int32_t var_1a8_20 = *esi
                    int32_t* eax_49 = sub_4ff520(*(data_30785d4 + 0x41c), edx_25)
                    char* edx_26 = var_190
                    
                    if (edx_26 == 0)
                        edx_26 = &data_83f3d3
                    
                    char** eax_50
                    char* ecx_37
                    eax_50, ecx_37 = sub_509140(0x20, edx_26)
                    sub_508cd0(eax_50)
                    int32_t* var_1a8_21 = eax_49
                    var_1ac = ecx_37
                    char** var_184_5 = &var_1ac
                    sub_4c4300(&var_1ac, &var_190)
                    sub_509b00(var_1ac)
                    sub_56e600()
                    sub_56b9d0(eax_50)
                    ecx_18 = sub_56f310(eax_50)
                    goto label_543636
            else
                char* result_5 = result_1
                
                if (result_5 == 0)
                    result_5 = &data_83f3d3
                
                int32_t edx_16 = &var_128 - result_5
                
                do
                    i = *result_5
                    result_5[edx_16] = i
                    result_5 = &result_5[1]
                while (i != 0)
                
                int32_t var_1a8_14 = 0x58
                var_1ac = nullptr
                sub_5abfc0(&var_180, var_1ac.b, var_1a8_14)
                int32_t edx_17 = data_3078818
                int32_t* param0_3 = &var_180
                var_180 = 0x58
                int32_t var_17c_4 = edx_17
                char (* var_164_4)[0x10c] = &var_128
                int32_t var_160_4 = 0x104
                char const* const var_174_4 = "UI2 (*.ui2)"
                int32_t var_168_4 = 0
                int32_t var_15c_4 = 0
                int32_t var_158_4 = 0
                int32_t var_154_4 = 0
                char const* const var_150_4 = "Save UI2 As"
                void* const var_144_4 = &data_881180
                int32_t var_14c_4 = 0x200000a
                BOOL eax_36
                int32_t edx_18
                eax_36, edx_18 = GetSaveFileNameA(param0_3)
                
                if (eax_36 != 0)
                    char** eax_38 = sub_4c4330(&var_128, edx_18, &var_18c)
                    ebx.b = 7
                    var_c_1.b = 7
                    char* ecx_27 = var_18c
                    
                    if (ecx_27 == 0)
                        ecx_27 = &data_83f3d3
                    
                    int128_t* edx_20 = sub_51ee80(eax_38, &var_190, ecx_27, &var_190)
                    var_c_1.b = 8
                    int32_t var_1a8_16 = *esi
                    int32_t* eax_41 = sub_4ff520(*(data_30785d4 + 0x45c), edx_20)
                    char* edx_21 = var_190
                    
                    if (edx_21 == 0)
                        edx_21 = &data_83f3d3
                    
                    char** eax_42
                    char* ecx_29
                    eax_42, ecx_29 = sub_509140(0x22, edx_21)
                    sub_508cd0(eax_42)
                    int32_t* var_1a8_17 = eax_41
                    var_1ac = ecx_29
                    char** var_184_4 = &var_1ac
                    sub_4c4300(&var_1ac, &var_190)
                    sub_509b00(var_1ac)
                    sub_56e600()
                    sub_56b9d0(eax_42)
                    ecx_18 = sub_52ff20(eax_42)
                    goto label_543636
        int32_t var_c_2 = 0xffffffff
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_4c4060(&result_1)
            int32_t temp0_1 = result[1]
            result[1] -= 1
            
            if (temp0_1 == 1)
                int32_t esi_6 = &result[3][2]
                result = sub_4f4430(result, sub_4f4380(esi_6), esi_6)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &var_194)
    return result
}
