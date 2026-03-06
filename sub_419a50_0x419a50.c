// 函数名称: sub_419a50
// 虚拟地址: 0x419a50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

char** __fastcallsub_419a50(char** arg1, char* arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_68e19d
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_21c = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t var_8_1 = 0
    int32_t var_208 = 0
    char const* const var_1ec = "Click anywhere"
    char const* const var_1e4 = "Click anywhere"
    char const* const var_1e0 = "Press trigger"
    char const* const var_1d8 = "Press trigger"
    char const* const var_1f0 = "Tap anywhere"
    char const* const var_1e8 = "Tap anywhere"
    void* const var_1d0 = &data_85c3f0
    void* const var_1c8 = &data_85c3f0
    char const* const var_1c0 = "Trigger"
    char const* const var_1b8 = "Trigger"
    void* const var_1b0 = &data_85c420
    void* const var_1a8 = &data_85c420
    char const* const var_1a0 = "trigger"
    char const* const var_198 = "trigger"
    char const* const var_140 = "Trigger"
    char const* const var_138 = "Trigger"
    void* const var_128 = &data_85c420
    char const* const var_120 = "trigger"
    char const* const var_118 = "trigger"
    char const* const var_1f4 = "[Tap anywhere]"
    char const* const var_1dc = "Press {XBOX_A}"
    char const* const var_1d4 = "[Tap]"
    char const* const var_1cc = "Click"
    char const* const var_1c4 = "Click"
    char const* const var_1bc = "Press {XBOX_A} on"
    char const* const var_1b4 = "[tap]"
    char const* const var_1ac = "click"
    char const* const var_1a4 = "click"
    char const* const var_19c = "press {XBOX_A} on"
    char const* const var_194 = "[tapping]"
    char const* const var_190 = "tapping"
    char const* const var_18c = "clicking"
    char const* const var_188 = "tapping"
    char const* const var_184 = "clicking"
    char const* const var_180 = "triggering"
    char const* const var_17c = "pressing {XBOX_A} on"
    char const* const var_178 = "triggering"
    char const* const var_174 = "[Double-tap]"
    char const* const var_170 = "Double-tap or press"
    char const* const var_16c = "Right-Click"
    char const* const var_168 = "Tap and hold"
    char const* const var_164 = "Press up on"
    char const* const var_160 = "Press {TOUCH_A} on"
    char const* const var_15c = "Press {XBOX_Y} on"
    char const* const var_158 = "Click touchpad on"
    char const* const var_154 = "[Drag]"
    char const* const var_150 = "Drag"
    char const* const var_14c = "Drag"
    void* const var_148 = &data_85c3f0
    char const* const var_144 = "Click"
    char const* const var_13c = "Press {XBOX_A} on"
    char const* const var_134 = "[drag]"
    char const* const var_130 = "drag"
    char const* const var_12c = "drag"
    char const* const var_124 = "click"
    char const* const var_11c = "press {XBOX_A} on"
    char const* const var_114 = "[ up]"
    void* const var_110 = &data_85c53c
    void* const var_10c = &data_85c53c
    char* const var_108 = &data_83f3d3
    char* const var_104 = &data_83f3d3
    char* const var_100 = &data_83f3d3
    char* const var_fc = &data_83f3d3
    char* const var_f8 = &data_83f3d3
    char const* const var_f0 = " to center"
    char const* const var_ec = " to center"
    char const* const var_d0 = " to the center"
    char const* const var_cc = " to the center"
    char const* const var_b0 = " to your empire"
    char const* const var_ac = " to your empire"
    char const* const var_90 = "by dragging it to the center"
    char const* const var_8c = "by dragging it to the center"
    char const* const var_80 = "using trigger"
    char const* const var_78 = "using trigger"
    char const* const var_70 = "Drag your good off its world"
    char const* const var_6c = "Drag your good off its world"
    char const* const var_60 = "Trigger your good"
    char const* const var_58 = "Trigger your good"
    char const* const var_50 = "Drag the good off"
    char const* const var_4c = "Drag the good off"
    char const* const var_40 = "Trigger the good on"
    char const* const var_38 = "Trigger the good on"
    char const* const var_30 = "to the right of your avatar image"
    char const* const var_2c = "to the right of your avatar image"
    char const* const var_f4 = "[ to center]"
    char* const var_e8 = &data_83f3d3
    char* const var_e4 = &data_83f3d3
    char* const var_e0 = &data_83f3d3
    char* const var_dc = &data_83f3d3
    char* const var_d8 = &data_83f3d3
    char const* const var_d4 = "[ to the center]"
    char* const var_c8 = &data_83f3d3
    char* const var_c4 = &data_83f3d3
    char* const var_c0 = &data_83f3d3
    char* const var_bc = &data_83f3d3
    char* const var_b8 = &data_83f3d3
    char const* const var_b4 = "[ to your empire]"
    char* const var_a8 = &data_83f3d3
    char* const var_a4 = &data_83f3d3
    char* const var_a0 = &data_83f3d3
    char* const var_9c = &data_83f3d3
    char* const var_98 = &data_83f3d3
    char const* const var_94 = "[by dragging it to the center]"
    char const* const var_88 = "by tapping it"
    char const* const var_84 = "by clicking it"
    char const* const var_7c = "by pressing {XBOX_A} on it"
    char const* const var_74 = "[Drag your good off its world]"
    char const* const var_68 = "Tap your good"
    char const* const var_64 = "Click your good"
    char const* const var_5c = "Press {XBOX_A} on your good"
    char const* const var_54 = "[Drag the good off]"
    char const* const var_48 = "Tap the good on"
    char const* const var_44 = "Click the good on"
    char const* const var_3c = "Press {XBOX_A} on the good on"
    char const* const var_34 = "[to the right of your avatar image]"
    char const* const var_28 = "on your console below"
    char const* const var_24 = "on your console below"
    char const* const var_20 = "on your console below"
    char const* const var_1c = "on your console below"
    char const* const var_18 = "on your console below"
    
    if (arg2 == 0)
        sub_4c5870("str", &data_83f3d3, "xString.cpp", 0x8f, "XString::XString")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    sub_4c42b0(arg1, arg2)
    char const* const* esi_1 = &var_1f0
    int32_t var_8_2 = 0
    int32_t var_208_1 = 1
    int32_t var_1fc = 0
    char const* const* var_204 = &var_1f0
    BOOL eax_18
    
    while (true)
        char* eax_6
        
        switch (sub_4d7510() - 1)
            case 0
                eax_6 = esi_1[1]
            label_419edb:
                void* edx = esi_1[-1]
                char* eax_8 = sub_4c4410(arg1)
                int32_t var_8_3 = 1
                char* var_200
                sub_4c4510(sub_4c4b20(eax_8, edx, eax_8, &var_200, edx, eax_6))
                var_8_3.b = 0
                char* eax_10 = var_200
                
                if (eax_10 != 0 && *eax_10 != 0)
                    void* eax_12 = sub_4c4060(&var_200)
                    int32_t temp0_1 = *(eax_12 + 4)
                    *(eax_12 + 4) -= 1
                    
                    if (temp0_1 == 1)
                        int32_t esi_3 = *(eax_12 + 0xc) + 0x10
                        sub_4f4430(eax_12, sub_4f4380(esi_3), esi_3)
                        esi_1 = var_204
                
                int32_t eax_16 = var_1fc + 1
                esi_1 = &esi_1[8]
                var_1fc = eax_16
                var_204 = esi_1
                
                if (eax_16 s< 0xf)
                    continue
                
                fsbase->NtTib.ExceptionList = ExceptionList
                sub_5a6aba(eax_2 ^ &__saved_ebp)
                return arg1
            case 1
                eax_6 = esi_1[5]
                goto label_419edb
            case 3
                eax_6 = esi_1[3]
                goto label_419edb
            case 4
                eax_6 = esi_1[2]
                goto label_419edb
            case 5
                eax_6 = esi_1[4]
                goto label_419edb
            case 6
                eax_6 = esi_1[6]
                goto label_419edb
            case 7
                eax_6 = *esi_1
                goto label_419edb
        
        sub_4c5870("Halt", &data_83f3d3, "..\code\RFTGClient.cpp", 0x642, "ReplaceTap")
        eax_18 = IsDebuggerPresent()
        break
    
    if (eax_18 == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
