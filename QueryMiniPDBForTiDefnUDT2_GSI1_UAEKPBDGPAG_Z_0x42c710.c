// 函数名称: ?QueryMiniPDBForTiDefnUDT2@GSI1@@UAEKPBDGPAG@Z
// 虚拟地址: 0x42c710
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*?QueryMiniPDBForTiDefnUDT2@GSI1@@UAEKPBDGPAG@Z(int32_t arg1, char* arg2, char* arg3)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68efc0
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t var_40 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    
    if (*(data_27e7a40 + 0x2c4960) == 0)
        void* eax_4 = sub_4fc3d0(&data_be1cb8, arg1)
        *(eax_4 + 8) = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_4
    
    *(sub_4fc3d0(&data_be1cb8, arg1) + 8) = 0
    void* eax_6 = sub_418a10()
    char* edx = *(data_27e7a40 + 0x548)
    void* var_28 = eax_6
    char* var_24 = edx
    int128_t* eax_8 = sub_4f6e90(arg2, sub_4fc3d0(&data_be1cb8, arg1), &data_83f3d3)
    *(eax_8 + 0x64) = *eax_8 + 1
    char** edx_1 = sub_4c4590(&data_83f3d3)
    *(eax_8 + 0x151) = 1
    char* esi_3 = var_24
    int32_t* eax_45
    char* var_20
    char* var_1c
    char* const var_18
    int32_t var_8_6
    
    if (*(esi_3 + 0x2c0b8) != 0)
        var_18 = &data_83f3d3
        int32_t var_8_1 = 0
        char** edx_2 = data_27e7a40
        void* eax_11 = edx_2[0x152]
        int32_t ecx_3 = *(eax_11 + 0x2c0b8)
        int32_t edx_3
        
        if (ecx_3 == 1)
            int32_t ecx_9 = *(eax_11 + 0x2c0bc)
            
            if (ecx_9 != edx_2[0x1d])
                int32_t* var_44_4 = &var_28
                var_8_1.b = 1
                char* eax_20 = *sub_424120(ecx_9, edx_2)
                
                if (eax_20 == 0)
                    eax_20 = &data_83f3d3
                
                char* var_44_5 = eax_20
                var_8_1.b = 2
                sub_4c4510(sub_4c4a50(&var_1c, "{blue_prompt}Gambling World: {prompt}%s lost ante"))
                var_8_1.b = 1
                sub_4c43d0(&var_1c)
                var_8_1.b = 0
                edx_3 = sub_4c43d0(&var_28)
            else
                edx_3 = sub_4c4590("{blue_prompt}Gambling World: {prompt}Ante lost")
        else
            if (ecx_3 != 2)
                sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x1e9a, "UpdatePrompt")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t ecx_6 = *(eax_11 + 0x2c0bc)
            
            if (ecx_6 == edx_2[0x1d])
                sub_4c5870("GetGui()->promptAntePromptWho != gCClient->localPlayerWho", &data_83f3d3, 
                    "..\code\RFTGClient.cpp", 0x1e96, "UpdatePrompt")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t* var_44_1 = &var_20
            var_8_1.b = 3
            char* eax_16 = *sub_424120(ecx_6, edx_2)
            
            if (eax_16 == 0)
                eax_16 = &data_83f3d3
            
            char* var_44_2 = eax_16
            var_8_1.b = 4
            sub_4c4510(sub_4c4a50(&var_24, "{blue_prompt}Gambling World: {prompt}%s won"))
            var_8_1.b = 3
            sub_4c43d0(&var_24)
            var_8_1.b = 0
            edx_3 = sub_4c43d0(&var_20)
        
        char* const eax_22 = var_18
        
        if (eax_22 == 0)
            eax_22 = &data_83f3d3
        
        int32_t var_44_7 = 1
        char* const var_48_1 = eax_22
        sub_4f9300(arg1, edx_3, arg2, arg2.b)
        var_8_6 = 0xffffffff
        eax_45 = sub_4c43d0(&var_18)
    else if (esi_3[0x2c098] == 0)
        char eax_37
        int32_t edx_11
        eax_37, edx_11 = sub_44b860()
        
        if (eax_37 == 0)
            void* eax_41 = sub_46b2b0(*(data_27e7a40 + 0x74))
            
            if (*(eax_41 + 0xc) s>= *(eax_41 + 0x10))
                eax_45 = data_27e7a40
                
                if (*(eax_45[0x152] + 0x2c024) s<= 0 && *(var_28 + 0x1ec3) == 0)
                    void* eax_46
                    int32_t edx_16
                    eax_46, edx_16 = sub_46b2b0(eax_45[0x1d])
                    var_1c = nullptr
                    sub_4c4330(&data_83f3d3, edx_16, &var_20)
                    char** var_48_8 = &var_20
                    int32_t var_8_5 = 0xd
                    char var_11 = 0
                    void* eax_47 = sub_418a10()
                    char* eax_48
                    int32_t edx_18
                    eax_48, edx_18 = sub_46e510(eax_47, eax_46, eax_47, &var_1c, &var_11)
                    char* eax_49
                    int32_t edx_19
                    eax_49, edx_19 = sub_4fd8f0(eax_48, edx_18, eax_48, nullptr)
                    var_8_5.b = 0xe
                    var_8_5.b = 0xf
                    sub_4c48a0(sub_4c4330("{prompt}", sub_4c4330(eax_49, edx_19, &var_24), &var_28), 
                        &var_18, &var_24)
                    var_8_5.b = 0x11
                    sub_4c43d0(&var_28)
                    var_8_5.b = 0x12
                    int32_t edx_21 = sub_4c43d0(&var_24)
                    
                    if (var_11 == 0)
                        var_8_5.b = 0x15
                        char* eax_57 = *sub_4c4ab0(&var_1c)
                        
                        if (eax_57 == 0)
                            eax_57 = &data_83f3d3
                        
                        char* ecx_39 = var_18
                        
                        if (ecx_39 == 0)
                            ecx_39 = &data_83f3d3
                        
                        var_8_5.b = 0x16
                        sub_4c4510(sub_4c4b20(eax_57, &var_24, ecx_39, &var_24, "[num]", eax_57))
                        var_8_5.b = 0x15
                    else
                        char** eax_52
                        int32_t edx_22
                        eax_52, edx_22 = sub_46e4d0(var_1c, edx_21, &var_1c)
                        var_8_5.b = 0x13
                        char* eax_53 = *eax_52
                        
                        if (eax_53 == 0)
                            eax_53 = &data_83f3d3
                        
                        char* ecx_38 = var_18
                        
                        if (ecx_38 == 0)
                            ecx_38 = &data_83f3d3
                        
                        var_8_5.b = 0x14
                        sub_4c4510(sub_4c4b20(&var_24, edx_22, ecx_38, &var_24, "[num]", eax_53))
                        var_8_5.b = 0x13
                    
                    sub_4c43d0(&var_24)
                    var_8_5.b = 0x12
                    int32_t edx_24 = sub_4c43d0(&var_1c)
                    char* esi_8 = var_20
                    var_24 = esi_8
                    
                    if (esi_8 != 0 && *esi_8 != 0)
                        void* eax_60 = sub_4c4060(&var_24)
                        *(eax_60 + 4) += 1
                    
                    var_8_5.b = 0x17
                    
                    if (esi_8 == 0)
                        esi_8 = &data_83f3d3
                    
                    char* ecx_42 = var_18
                    
                    if (ecx_42 == 0)
                        ecx_42 = &data_83f3d3
                    
                    var_8_5.b = 0x18
                    sub_4c4510(sub_4c4b20(&var_1c, edx_24, ecx_42, &var_1c, "[card]", esi_8))
                    var_8_5.b = 0x17
                    sub_4c43d0(&var_1c)
                    var_8_5.b = 0x12
                    int32_t* eax_63
                    int32_t edx_25
                    eax_63, edx_25 = sub_4c43d0(&var_24)
                    char* ecx_45 = data_27e7fd0
                    
                    if (ecx_45[0x27] != 0)
                        char* const ecx_46 = var_18
                        
                        if (ecx_46 == 0)
                            ecx_46 = &data_83f3d3
                        
                        var_8_5.b = 0x1a
                        void var_2c
                        sub_4c4510(sub_4c4b20(eax_63, &var_2c, ecx_46, &var_2c, "Drag", "Click"))
                        var_8_5.b = 0x12
                        ecx_45, edx_25 = sub_4c43d0(&var_2c)
                    
                    char* const eax_65 = var_18
                    
                    if (eax_65 == 0)
                        eax_65 = &data_83f3d3
                    
                    int32_t var_44_24 = 1
                    char* const var_48_10 = eax_65
                    sub_4f9300(arg1, edx_25, ecx_45, arg2.b)
                    var_8_5.b = 0xd
                    sub_4c43d0(&var_18)
                    var_8_6 = 0xffffffff
                    eax_45 = sub_4c43d0(&var_20)
            else
                char** ecx_27 = &var_24
                *arg3 = 1
                int32_t edx_15 = sub_4c4330("{prompt}Waiting for server", arg3, ecx_27)
                int32_t var_8_4 = 0xc
                char* eax_42 = var_24
                
                if (eax_42 == 0)
                    eax_42 = &data_83f3d3
                
                int32_t var_44_15 = 1
                char* var_48_7 = eax_42
                sub_4f9300(arg1, edx_15, ecx_27, arg2.b)
                var_8_6 = 0xffffffff
                eax_45 = sub_4c43d0(&var_24)
        else
            *arg3 = 1
            int32_t edx_12 = sub_4c4330("{prompt}Waiting for other players", edx_11, &var_24)
            int32_t var_8_3 = 0xb
            char* eax_39 = var_24
            
            if (eax_39 == 0)
                eax_39 = &data_83f3d3
            
            int32_t var_44_14 = 1
            char* var_48_6 = eax_39
            sub_4f9300(arg1, edx_12, arg2, arg2.b)
            var_8_6 = 0xffffffff
            eax_45 = sub_4c43d0(&var_24)
    else
        int32_t* var_44_8 = &var_1c
        char** edx_4 = sub_424120(*(esi_3 + 0x2c084), edx_1)
        int32_t var_8_2 = 5
        char* const* var_44_9 = &var_18
        sub_424120(*(esi_3 + 0x2c08c), edx_4)
        var_8_2.b = 6
        char** ecx_18
        
        if (*(esi_3 + 0x2c09c) != 1)
            int32_t edx_8 = *(esi_3 + 0x2c084)
            char const* const eax_32 = "assault"
            
            if (edx_8 != *(data_27e7a40 + 0x74))
                eax_32 = "assaults"
            
            sub_4c4330(eax_32, edx_8, &var_20)
            var_8_2.b = 9
            char* const eax_33 = var_18
            char* const edx_9 = &data_83f3d3
            
            if (eax_33 != 0)
                edx_9 = eax_33
            
            char* ecx_20 = var_20
            
            if (ecx_20 == 0)
                ecx_20 = &data_83f3d3
            
            char* eax_34 = var_1c
            
            if (eax_34 == 0)
                eax_34 = &data_83f3d3
            
            char* const var_44_12 = edx_9
            char* var_48_4 = ecx_20
            char* var_4c_6 = eax_34
            char* ecx_21 = sub_4c4a50(&var_24, "{blue_prompt}Takeover: {prompt}%s %s %s")
            var_8_2.b = 0xa
            char* eax_35 = var_24
            
            if (eax_35 == 0)
                eax_35 = &data_83f3d3
            
            int32_t var_44_13 = 1
            char* var_48_5 = eax_35
            sub_4f9300(arg1, arg2, ecx_21, arg2.b)
            var_8_2.b = 9
            sub_4c43d0(&var_24)
            ecx_18 = &var_20
        else
            void* edx_5 = data_27e7a40
            char const* const eax_26 = "fail"
            
            if (*(esi_3 + 0x2c084) != *(edx_5 + 0x74))
                eax_26 = "fails"
            
            sub_4c4330(eax_26, edx_5, &var_24)
            var_8_2.b = 7
            char* const eax_27 = var_18
            char* const edx_6 = &data_83f3d3
            
            if (eax_27 != 0)
                edx_6 = eax_27
            
            char* ecx_15 = var_24
            
            if (ecx_15 == 0)
                ecx_15 = &data_83f3d3
            
            char* const eax_28 = var_1c
            
            if (eax_28 == 0)
                eax_28 = &data_83f3d3
            
            char* const var_44_10 = edx_6
            char* var_48_2 = ecx_15
            char* const var_4c_4 = eax_28
            int32_t edx_7 = sub_4c4a50(&var_20, "{blue_prompt}Takeover: {prompt}%s %s assault on %s")
            var_8_2.b = 8
            char* eax_29 = var_20
            
            if (eax_29 == 0)
                eax_29 = &data_83f3d3
            
            int32_t var_44_11 = 1
            char* var_48_3 = eax_29
            sub_4f9300(arg1, edx_7, arg2, arg2.b)
            var_8_2.b = 7
            sub_4c43d0(&var_20)
            ecx_18 = &var_24
        
        var_8_2.b = 6
        sub_4c43d0(ecx_18)
        var_8_2.b = 5
        sub_4c43d0(&var_18)
        var_8_6 = 0xffffffff
        eax_45 = sub_4c43d0(&var_1c)
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_45
}
