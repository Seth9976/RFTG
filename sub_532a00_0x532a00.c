// 函数名称: sub_532a00
// 虚拟地址: 0x532a00
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

void* __convention("regparm")sub_532a00(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    int32_t eax_1 = __security_cookie ^ &__saved_ebp
    int32_t var_3c = arg4
    void* i = sub_5329a0(arg3, *arg3)
    void* i_1 = i
    int32_t* var_34 = arg3
    char var_30 = 0.d.b
    
    while (i != 0)
        float var_70[0x9]
        sub_405f60(&var_70, i_1 + 0x10)
        float var_2c[0x8]
        int32_t ecx_2 = __builtin_memcpy(&var_2c, &var_70, 0x20)
        int32_t eax_3 = *i_1
        int16_t top
        
        if (eax_3 == 1)
            void* eax_9 = data_27e7fcc
            int32_t ecx_5 = *(i_1 + 4)
            
            if (eax_9 == 0)
                sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, "GetGameData")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            void* edx_4 = *(eax_9 + 0x30)
            
            if (ecx_5 == 0)
            label_532b2f:
                *var_34 = *(i_1 + 0xc)
                sub_532730(i_1)
                var_30 = 0
            else
                uint32_t eax_10 = zx.d(ecx_5.w)
                
                if (eax_10 u>= *(edx_4 + 4))
                    goto label_532b2f
                
                void* eax_12 = eax_10 * 0x7c + *edx_4
                
                if (*(eax_12 + 0x78) != ecx_5)
                    goto label_532b2f
                
                unimplemented  {fld st0, dword [0x8c4d34]}
                int32_t var_104_2 = __builtin_memcpy(eax_12 + 0x2c, &var_70, 0x20)
                float var_104_3 = fconvert.s(unimplemented  {fstp dword [esp], st0})
                unimplemented  {fstp dword [esp], st0}
                sub_4eed90(eax_12, var_104_3)
                top -= 1
                unimplemented  {call 0x4eed90}
            label_532abf:
                
                if (var_30 == 0)
                    var_34 = i_1 + 0xc
                else
                    var_30 = 0
        else
            if (eax_3 != 2)
                sub_4c5870("Halt", &data_83f3d3, "Attachment.cpp", 0x15b, "AttachPointUpdate")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            void* eax_6 = sub_4e7b40(ecx_2, *(i_1 + 8))
            
            if (eax_6 != 0)
                int32_t edx_2 = data_be4aac
                *(eax_6 + 0x60) = edx_2
                *(eax_6 + 0x64) = data_be4ab0
                void var_f0
                sub_406370(&var_f0, edx_2, &var_2c)
                void var_b0
                __builtin_memcpy(&var_b0, &var_f0, 0x40)
                __builtin_memcpy(eax_6 + 0x20, &var_b0, 0x40)
                sub_4e7c30(eax_6)
                top -= 1
                unimplemented  {call 0x4e7c30}
                goto label_532abf
            
            *var_34 = *(i_1 + 0xc)
            sub_532730(i_1)
            var_30 = 0
        int32_t ecx_8 = *var_34
        void* eax_15 = data_27e7fcc
        
        if (eax_15 == 0)
            sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, "GetGameData")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        void* edx_7 = *(eax_15 + 0x34)
        
        if (ecx_8 != 0)
            uint32_t eax_16 = zx.d(ecx_8.w)
            
            if (eax_16 u< *(edx_7 + 4))
                void* eax_18 = eax_16 * 0x34 + *edx_7
                int32_t edx_8
                edx_8.b = *(eax_18 + 0x30) != ecx_8
                i = eax_18 & (edx_8 - 1)
            else
                i = nullptr
        else
            i = nullptr
        
        i_1 = i
    
    sub_5a6aba(eax_1 ^ &__saved_ebp)
    return i
}
