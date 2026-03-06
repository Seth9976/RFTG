// 函数名称: sub_491140
// 虚拟地址: 0x491140
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_491140(int32_t arg1, void* arg2, int32_t* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    long double x87_r7 = float.t(1)
    void* ebx = arg2
    void* eax_4 = arg4 * 0xb4 + ebx
    int32_t i = sx.d(*(eax_4 + 0x46))
    int32_t ecx = 0
    void* var_34 = ebx
    int32_t var_28_1
    __builtin_memset(&var_28_1, 0, 0x20)
    int32_t var_3c = 0
    int32_t var_24_1
    
    if (i != 0xffffffff)
        do
            void* eax_5 = *(ebx + i * 0x14 + 0x46c)
            
            if ((*(eax_5 + 0x10) & &__dos_header) == 0)
                if (*((sx.d(*(eax_5 + 4)) << 2) + &data_2689cf8) + arg5 s>= data_2691bd8)
                    sub_4c5870("n + card_input[c_ptr->d_ptr->index] < role.num_inputs", &data_83f3d3, 
                        "..\code\rftg\ai.cpp", 0xb36, "predict_action_player")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                if (arg5 s< 0)
                    sub_4c5870("n >= 0", &data_83f3d3, "..\code\rftg\ai.cpp", 0xb37, 
                        "predict_action_player")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                *(data_2691bfc + ((*((sx.d(*(eax_5 + 4)) << 2) + &data_2689cf8) + arg5) << 3)) =
                    fconvert.d(x87_r7)
                
                if (*(eax_5 + 6) != 2)
                    var_28_1 += 1
                else
                    var_3c += 1
                
                int32_t j_2 = sx.d(*(eax_5 + 0x15))
                
                if (j_2 s> 0)
                    void* ecx_3 = eax_5 + 0x18
                    int32_t j_1 = j_2
                    int32_t j
                    
                    do
                        if (*ecx_3 == 1 && (*(ecx_3 + 8) & 4) != 0)
                            var_24_1 = 1
                        
                        ecx_3 += 0x18
                        j = j_1
                        j_1 -= 1
                    while (j != 1)
                
                ebx = var_34
            
            i = sx.d(*(ebx + ((i * 5 + 0x11d) << 2)))
        while (i != 0xffffffff)
        
        ecx = var_28_1
    
    int32_t esi_1 = arg5 + data_2689cf0
    
    for (int32_t i_1 = 0; i_1 s< 0xa; )
        if (esi_1 s>= data_2691bd8)
            sub_4c5870("n < role.num_inputs", &data_83f3d3, "..\code\rftg\ai.cpp", 0xb5b, 
                "predict_action_player")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (esi_1 s< 0)
            sub_4c5870("n >= 0", &data_83f3d3, "..\code\rftg\ai.cpp", 0xb5c, "predict_action_player")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_7
        edx_7.b = var_3c s> i_1
        i_1 += 1
        esi_1 += 1
        *(data_2691bfc + (esi_1 << 3) - 8) = fconvert.d(float.t(edx_7 * 2 - 1))
    
    for (int32_t i_2 = 0; i_2 s< 0xa; )
        if (esi_1 s>= data_2691bd8)
            sub_4c5870("n < role.num_inputs", &data_83f3d3, "..\code\rftg\ai.cpp", 0xb63, 
                "predict_action_player")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (esi_1 s< 0)
            sub_4c5870("n >= 0", &data_83f3d3, "..\code\rftg\ai.cpp", 0xb64, "predict_action_player")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_10
        edx_10.b = ecx s> i_2
        i_2 += 1
        esi_1 += 1
        *(data_2691bfc + (esi_1 << 3) - 8) = fconvert.d(float.t(edx_10 * 2 - 1))
    
    arg3[2] = ecx + var_3c
    int32_t i_3 = sx.d(*(eax_4 + 0x46))
    int32_t edi = 0
    int32_t var_20
    
    for (; i_3 != 0xffffffff; i_3 = sx.d(*(ebx + ((i_3 * 5 + 0x11d) << 2))))
        int32_t ecx_5 = i_3 * 5
        
        if (*(ebx + (ecx_5 << 2) + 0x472) != 0)
            void* edx_14 = *(ebx + (ecx_5 << 2) + 0x46c)
            edi += 1
            bool cond:2_1 = (*(edx_14 + 0x10) & &__dos_header) != 0
            (&var_20)[sx.d(*(edx_14 + 0xe))] = 1
            
            if (not(cond:2_1))
                int32_t ecx_9 = *((sx.d(*(edx_14 + 4)) << 2) + &data_2689940) + esi_1
                
                if (ecx_9 s>= data_2691bd8)
                    sub_4c5870("n + good_input[c_ptr->d_ptr->index] < role.num_inputs", &data_83f3d3, 
                        "..\code\rftg\ai.cpp", 0xb85, "predict_action_player")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                if (esi_1 s< 0)
                    sub_4c5870("n >= 0", &data_83f3d3, "..\code\rftg\ai.cpp", 0xb86, 
                        "predict_action_player")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                *(data_2691bfc + (ecx_9 << 3)) = fconvert.d(x87_r7)
            
            ebx = var_34
    
    int32_t esi_2 = esi_1 + data_26031cc
    
    for (int32_t i_4 = 0; i_4 s< 6; )
        if (esi_2 s>= data_2691bd8)
            sub_4c5870("n < role.num_inputs", &data_83f3d3, "..\code\rftg\ai.cpp", 0xb90, 
                "predict_action_player")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (esi_2 s< 0)
            sub_4c5870("n >= 0", &data_83f3d3, "..\code\rftg\ai.cpp", 0xb91, "predict_action_player")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t ecx_10
        ecx_10.b = edi s> i_4
        i_4 += 1
        esi_2 += 1
        *(data_2691bfc + (esi_2 << 3) - 8) = fconvert.d(float.t(ecx_10 * 2 - 1))
    
    arg3[4] = edi
    
    for (int32_t i_5 = 2; i_5 s<= 5; )
        if (esi_2 s>= data_2691bd8)
            sub_4c5870("n < role.num_inputs", &data_83f3d3, "..\code\rftg\ai.cpp", 0xb9c, 
                "predict_action_player")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (esi_2 s< 0)
            sub_4c5870("n >= 0", &data_83f3d3, "..\code\rftg\ai.cpp", 0xb9d, "predict_action_player")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t ecx_12
        ecx_12.b = (&var_20)[i_5] != 0
        i_5 += 1
        esi_2 += 1
        *(data_2691bfc + (esi_2 << 3) - 8) = fconvert.d(float.t(ecx_12 * 2 - 1))
    
    if (ebx == 0)
        sub_49b2a0()
        noreturn
    
    if (arg4 s< 0)
        sub_49b2a0()
        noreturn
    
    int32_t i_6 = sx.d(*(eax_4 + 0x44))
    int32_t ecx_14 = 0
    
    if (i_6 s< 0xffffffff)
        sub_49b2a0()
        noreturn
    
    while (i_6 != 0xffffffff)
        i_6 = sx.d(*(ebx + ((i_6 * 5 + 0x11d) << 2)))
        ecx_14 += 1
    
    for (int32_t i_7 = 0; i_7 s< 0xc; )
        int32_t edx_19
        edx_19.b = ecx_14 s> i_7
        i_7 += 1
        esi_2 += 1
        *(data_2691bfc + (esi_2 << 3) - 8) = fconvert.d(float.t(edx_19 * 2 - 1))
    
    arg3[3] = ecx_14
    int32_t i_8
    
    for (i_8 = 0; i_8 s< 0xf; )
        if (esi_2 s>= data_2691bd8)
            sub_4c5870("n < role.num_inputs", &data_83f3d3, "..\code\rftg\ai.cpp", 0xbb2, 
                "predict_action_player")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (esi_2 s< 0)
            sub_4c5870("n >= 0", &data_83f3d3, "..\code\rftg\ai.cpp", 0xbb3, "predict_action_player")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_22
        edx_22.b = sx.d(*(eax_4 + 0xb2)) s> i_8
        i_8 += 1
        esi_2 += 1
        *(data_2691bfc + (esi_2 << 3) - 8) = fconvert.d(float.t(edx_22 * 2 - 1))
    
    int32_t eax_27 = sub_4b1530(i_8, arg4, ebx, arg4)
    
    for (int32_t i_9 = 0; i_9 s< 0xa; )
        if (esi_2 s>= data_2691bd8)
            sub_4c5870("n < role.num_inputs", &data_83f3d3, "..\code\rftg\ai.cpp", 0xbbe, 
                "predict_action_player")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (esi_2 s< 0)
            sub_4c5870("n >= 0", &data_83f3d3, "..\code\rftg\ai.cpp", 0xbbf, "predict_action_player")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_25
        edx_25.b = eax_27 s> i_9
        i_9 += 1
        esi_2 += 1
        *(data_2691bfc + (esi_2 << 3) - 8) = fconvert.d(float.t(edx_25 * 2 - 1))
    
    if (esi_2 s>= data_2691bd8)
        sub_4c5870("n < role.num_inputs", &data_83f3d3, "..\code\rftg\ai.cpp", 0xbc4, 
            "predict_action_player")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (esi_2 s< 0)
        sub_4c5870("n >= 0", &data_83f3d3, "..\code\rftg\ai.cpp", 0xbc5, "predict_action_player")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t ecx_18
    ecx_18.b = *(eax_4 + 0xb3) != 0
    *(data_2691bfc + ((esi_2 + 1) << 3) - 8) = fconvert.d(float.t(ecx_18 * 2 - 1))
    
    if (esi_2 + 1 s>= data_2691bd8)
        sub_4c5870("n < role.num_inputs", &data_83f3d3, "..\code\rftg\ai.cpp", 0xbc9, 
            "predict_action_player")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (esi_2 + 1 s< 0)
        sub_4c5870("n >= 0", &data_83f3d3, "..\code\rftg\ai.cpp", 0xbca, "predict_action_player")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t ecx_20
    ecx_20.b = *(eax_4 + 0xb4) != 0
    *(data_2691bfc + ((esi_2 + 2) << 3) - 8) = fconvert.d(float.t(ecx_20 * 2 - 1))
    
    if (esi_2 + 2 s>= data_2691bd8)
        sub_4c5870("n < role.num_inputs", &data_83f3d3, "..\code\rftg\ai.cpp", 0xbce, 
            "predict_action_player")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (esi_2 + 2 s< 0)
        sub_4c5870("n >= 0", &data_83f3d3, "..\code\rftg\ai.cpp", 0xbcf, "predict_action_player")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t eax_39
    eax_39.b = var_24_1 != 0
    int32_t result = esi_2 + 3
    *(data_2691bfc + (result << 3) - 8) = fconvert.d(float.t(eax_39 * 2 - 1))
    int32_t eax_41 = sub_48c070(eax_39 * 2 - 1, arg4, ebx, 1)
    
    for (int32_t i_10 = 0; i_10 s< 6; )
        if (result s>= data_2691bd8)
            sub_4c5870("n < role.num_inputs", &data_83f3d3, "..\code\rftg\ai.cpp", 0xbd9, 
                "predict_action_player")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (result s< 0)
            sub_4c5870("n >= 0", &data_83f3d3, "..\code\rftg\ai.cpp", 0xbda, "predict_action_player")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_31
        edx_31.b = eax_41 s> i_10
        i_10 += 1
        result += 1
        *(data_2691bfc + (result << 3) - 8) = fconvert.d(float.t(edx_31 * 2 - 1))
    
    int32_t eax_42 = sub_48c070(eax_41, arg4, ebx, 0)
    
    for (int32_t i_11 = 0; i_11 s< 6; )
        if (result s>= data_2691bd8)
            sub_4c5870("n < role.num_inputs", &data_83f3d3, "..\code\rftg\ai.cpp", 0xbe5, 
                "predict_action_player")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (result s< 0)
            sub_4c5870("n >= 0", &data_83f3d3, "..\code\rftg\ai.cpp", 0xbe6, "predict_action_player")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        int32_t edx_35
        edx_35.b = eax_42 s> i_11
        i_11 += 1
        result += 1
        *(data_2691bfc + (result << 3) - 8) = fconvert.d(float.t(edx_35 * 2 - 1))
    
    eax_42.b = *(ebx + 0x45a)
    
    if (eax_42.b s> 0 && eax_42.b s< 4)
        void* eax_44 = eax_4 + 0x68
        void* ecx_25 = (result << 3) + 0x18
        int32_t i_14 = 2
        result += 0x14
        int32_t i_12
        
        do
            int32_t edx_38
            edx_38.b = *(eax_44 - 1) != 0
            *(ecx_25 + data_2691bfc - 0x18) = fconvert.d(float.t(edx_38 * 2 - 1))
            int32_t edx_41
            edx_41.b = *eax_44 != 0
            *(ecx_25 + data_2691bfc - 0x10) = fconvert.d(float.t(edx_41 * 2 - 1))
            int32_t edx_44
            edx_44.b = *(eax_44 + 1) != 0
            *(ecx_25 + data_2691bfc - 8) = fconvert.d(float.t(edx_44 * 2 - 1))
            int32_t edx_47
            edx_47.b = *(eax_44 + 2) != 0
            *(ecx_25 + data_2691bfc) = fconvert.d(float.t(edx_47 * 2 - 1))
            int32_t edx_50
            edx_50.b = *(eax_44 + 3) != 0
            *(ecx_25 + data_2691bfc + 8) = fconvert.d(float.t(edx_50 * 2 - 1))
            int32_t edx_53
            edx_53.b = *(eax_44 + 4) != 0
            *(ecx_25 + data_2691bfc + 0x10) = fconvert.d(float.t(edx_53 * 2 - 1))
            int32_t edx_56
            edx_56.b = *(eax_44 + 5) != 0
            *(ecx_25 + data_2691bfc + 0x18) = fconvert.d(float.t(edx_56 * 2 - 1))
            int32_t edx_59
            edx_59.b = *(eax_44 + 6) != 0
            *(ecx_25 + data_2691bfc + 0x20) = fconvert.d(float.t(edx_59 * 2 - 1))
            int32_t edx_62
            edx_62.b = *(eax_44 + 7) != 0
            *(ecx_25 + data_2691bfc + 0x28) = fconvert.d(float.t(edx_62 * 2 - 1))
            int32_t edx_65
            edx_65.b = *(eax_44 + 8) != 0
            eax_44 += 0xa
            *(ecx_25 + data_2691bfc + 0x30) = fconvert.d(float.t(edx_65 * 2 - 1))
            ecx_25 += 0x50
            i_12 = i_14
            i_14 -= 1
        while (i_12 != 1)
    
    void* ecx_26
    
    if (*(ebx + 0x45a) != 3)
        ecx_26 = eax_4
    else
        if (result s>= data_2691bd8)
            sub_4c5870("n < role.num_inputs", &data_83f3d3, "..\code\rftg\ai.cpp", 0xbf9, 
                "predict_action_player")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (result s< 0)
            sub_4c5870("n >= 0", &data_83f3d3, "..\code\rftg\ai.cpp", 0xbfa, "predict_action_player")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        ecx_26 = eax_4
        int32_t eax_51
        eax_51.b = *(ecx_26 + 0x3c) != 0
        result += 1
        int32_t i_13 = 0
        *(data_2691bfc + (result << 3) - 8) = fconvert.d(float.t(eax_51 * 2 - 1))
        
        do
            if (result s>= data_2691bd8)
                sub_4c5870("n < role.num_inputs", &data_83f3d3, "..\code\rftg\ai.cpp", 0xc01, 
                    "predict_action_player")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (result s< 0)
                sub_4c5870("n >= 0", &data_83f3d3, "..\code\rftg\ai.cpp", 0xc02, 
                    "predict_action_player")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t ebx_3
            ebx_3.b = sx.d(*(ecx_26 + 0xa3)) s> i_13
            i_13 += 1
            result += 1
            *(data_2691bfc + (result << 3) - 8) = fconvert.d(float.t(ebx_3 * 2 - 1))
        while (i_13 s< 0xf)
        
        arg3[1] = sx.d(*(ecx_26 + 0xa3))
    
    int32_t eax_56 = 0
    
    while (true)
        if (result s>= data_2691bd8)
            sub_4c5870("n < role.num_inputs", &data_83f3d3, "..\code\rftg\ai.cpp", 0xc0e, 
                "predict_action_player")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        if (result s< 0)
            break
        
        int32_t var_24_17
        
        if (*(ecx_26 + 0x34) != eax_56)
            var_24_17 = 0xffffffff
        
        if (*(ecx_26 + 0x34) == eax_56 || *(ecx_26 + 0x38) == eax_56)
            var_24_17 = 1
        
        eax_56 += 1
        *(data_2691bfc + (result << 3)) = fconvert.d(float.t(var_24_17))
        result += 1
        
        if (eax_56 s>= 0xa)
            *arg3 = sx.d(*(ecx_26 + 0xaa))
            sub_5a6aba(eax_1 ^ &__saved_ebp)
            return result
    
    sub_4c5870("n >= 0", &data_83f3d3, "..\code\rftg\ai.cpp", 0xc0f, "predict_action_player")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
