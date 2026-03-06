// 函数名称: sub_507be0
// 虚拟地址: 0x507be0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

uint32_tsub_507be0()
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_6978be
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_9c = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    uint32_t result = data_27e7fcc
    
    if (result != 0)
        int32_t eax_3 = *(result + 0x3c)
        
        if (((eax_3 u>> 6).b & 1) == 0 && ((eax_3 u>> 7).b & 1) == 0)
            result.b = (eax_3 u>> 5).b & 1
        
        if (((eax_3 u>> 6).b & 1) != 0 || ((eax_3 u>> 7).b & 1) != 0 || result.b != 0)
            int32_t var_4c = 0
            float var_40_1 = fconvert.s(fconvert.t(-2f))
            int32_t var_50_1 = 0
            float var_54 = fconvert.s(fconvert.t(0.0250000004f))
            int32_t var_48_1 = 0
            float var_74 = fconvert.s(float.t(1))
            int32_t var_44_1 = 0x3f800000
            int32_t var_30
            __builtin_memcpy(&var_30, 0x27e8090, 0x1c)
            float var_3c_1 = fconvert.s(fconvert.t(8f))
            float var_38_1 = fconvert.s(fconvert.t(2f))
            int32_t var_70_1 = var_30
            int32_t var_2c
            int32_t var_6c_1 = var_2c
            int32_t var_28
            int32_t var_68_1 = var_28
            int32_t var_24
            int32_t var_64_1 = var_24
            int32_t var_20
            int32_t var_60_1 = var_20
            int32_t var_1c
            int32_t var_5c_1 = var_1c
            int32_t var_18
            int32_t var_58_1 = var_18
            float var_34
            sub_405f60(&var_34, &var_74)
            sub_4dad50()
            
            if ((data_31664b0 & 1) == 0)
                data_31664b0.d |= 1
                int32_t var_8_1 = 0
                data_31664ac = sub_509140(5, "sys/sprite_3d_no_zread.material")
                int32_t var_8_2 = 0xffffffff
            
            *(data_27e7fe4 + 0x254) = data_31664ac
            
            if (data_3078599 == 0)
                sub_4c5870("gDraw3DData.submittingRenderItems", &data_83f3d3, "Draw3d.cpp", 0x31e, 
                    "Draw3DSetDrawEyeMask")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            data_27e8560 = 3
            sub_4e5750()
            
            if (data_3078599 == 0)
                sub_4c5870("gDraw3DData.submittingRenderItems", &data_83f3d3, "Draw3d.cpp", 0x31e, 
                    "Draw3DSetDrawEyeMask")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            void* eax_11 = data_27e7fe4
            data_27e8560 = 7
            *(eax_11 + 0x254) = 0
            __builtin_memcpy(eax_11 + 0x9c, 0x83faf8, 0x40)
            *(eax_11 + 0xdc) = 0
            result = sub_4e2080()
    
    fsbase->NtTib.ExceptionList = ExceptionList
    sub_5a6aba(eax_2 ^ &__saved_ebp)
    return result
}
