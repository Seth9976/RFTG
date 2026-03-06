// 函数名称: sub_4fab00
// 虚拟地址: 0x4fab00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_4fab00(int32_t arg1 @ esi, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t ecx = __chkstk(0x11f0)
    int32_t ecx = __chkstk(0x11f0)
    int32_t __saved_ebp
    int32_t var_c = __security_cookie ^ &__saved_ebp
    void* eax_2 = sub_4fc3d0(&data_be1cb8, ecx)
    int128_t var_1158[0x4]
    sub_5abfc0(&var_1158, 0, 0x1100)
    int32_t var_58 = 1
    __builtin_memcpy(&var_1158, arg4, 0x40)
    int32_t var_1118 = 0xffffffff
    int32_t* eax_3
    int32_t ecx_1
    eax_3, ecx_1 = sub_4f4890(*(eax_2 + 4))
    int32_t* edi = eax_3
    int32_t eax_4 = 0
    int32_t* var_1168 = edi
    int32_t var_1164 = 0
    
    if (edi[1] s> 0)
        int32_t var_1160_1 = 0
        void* var_115c_1 = eax_2 + 0x30
        
        while (true)
            void* ebx_2 = *edi
            int32_t esi_3 = *(ebx_2 + eax_4 + 8)
            void* ebx_3 = ebx_2 + eax_4
            
            if (eax_4 s>= 0x11800)
                sub_4c5870("idx < MAX_UI_ELEMENTS", &data_83f3d3, "UIDef.cpp", 0x518, 
                    "UIStateElementGet")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t edx_2 = *var_115c_1
            int128_t* eax_5
            
            if (edx_2 != 0)
                eax_5 = sub_4fc1e0(ecx_1, edx_2)
            else
                eax_5 = sub_4fc0d0()
                *(eax_5 + 4) = esi_3
                *var_115c_1 = *(eax_5 + 0x1bc)
            
            if (*(ebx_3 + 4) != 6)
                if (var_1164 == arg3)
                    if (var_58 s> 0)
                        __builtin_memcpy(arg2, &(&__saved_ebp)[var_58 * 0x11 - 0x466], 0x40)
                        sub_5a6aba(arg1 ^ &__saved_ebp)
                        return arg2
                    
                    sub_4c5870("stack.numEntries > 0", &data_83f3d3, "UIDef.cpp", 0x66f, "Peek")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                ecx_1 = sub_4f75f0(&var_1158)
            else
                if (var_58 s<= 0)
                    sub_4c5870("stack.numEntries > 0", &data_83f3d3, "UIDef.cpp", 0x66f, "Peek")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                void* ecx_4 = &(&__saved_ebp)[var_58 * 0x11 - 0x455]
                void var_50
                __builtin_memcpy(&var_50, ecx_4 - 0x44, 0x40)
                void var_11f0
                int32_t edx_8 = sub_4f84f0(&var_11f0, &var_50, ebx_3, &var_11f0, eax_5)
                void var_11b0
                __builtin_memcpy(&var_11b0, edx_8, 0x40)
                unimplemented  {fld st0, dword [ebp-0x119c]}
                long double temp0_1 = fconvert.t(100.0)
                unimplemented  {fcom st0, qword [0x8a55e8]} f- temp0_1
                bool c0_1 = unimplemented  {fcom st0, qword [0x8a55e8]} f< temp0_1
                bool c2_1 = is_unordered.t(unimplemented  {fcom st0, qword [0x8a55e8]}, temp0_1)
                bool c3_1 = unimplemented  {fcom st0, qword [0x8a55e8]} f== temp0_1
                int32_t eax_7
                int16_t top
                eax_7.w = (c0_1 ? 1 : 0) << 8 | (c2_1 ? 1 : 0) << 0xa | (c3_1 ? 1 : 0) << 0xe
                    | (top & 7) << 0xb
                bool p_1 = unimplemented  {test ah, 0x5}
                
                if (p_1)
                    unimplemented  {fstp st0, st0}
                    unimplemented  {fstp st0, st0}
                    sub_4c5870("tLocal.aspectX < 100", &data_83f3d3, "UIDef.cpp", 0xc40, 
                        "UIStateTransform")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                long double temp1_1 = fconvert.t(-100.0)
                unimplemented  {fcomp st0, qword [0x8a5898]} f- temp1_1
                bool c0_2 = unimplemented  {fcomp st0, qword [0x8a5898]} f< temp1_1
                bool c2_2 = is_unordered.t(unimplemented  {fcomp st0, qword [0x8a5898]}, temp1_1)
                bool c3_2 = unimplemented  {fcomp st0, qword [0x8a5898]} f== temp1_1
                unimplemented  {fcomp st0, qword [0x8a5898]}
                top += 1
                eax_7.w = (c0_2 ? 1 : 0) << 8 | (c2_2 ? 1 : 0) << 0xa | (c3_2 ? 1 : 0) << 0xe
                    | (top & 7) << 0xb
                
                if ((eax_7:1.b & 0x41) != 0)
                    sub_4c5870("tLocal.aspectX > -100", &data_83f3d3, "UIDef.cpp", 0xc41, 
                        "UIStateTransform")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                var_58 += 1
                __builtin_memcpy(ecx_4, edx_8, 0x40)
                ecx_1 = *(ebx_3 + 0x48)
                edi = var_1168
                *(ecx_4 + 0x40) = ecx_1
            
            var_115c_1 += 4
            var_1160_1 += 0x118
            int32_t eax_10 = var_1164 + 1
            var_1164 = eax_10
            
            if (eax_10 s>= edi[1])
                break
            
            eax_4 = var_1160_1
    
    sub_4c5870("Halt", &data_83f3d3, "UIDef.cpp", 0xc4f, "UIStateTransform")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
