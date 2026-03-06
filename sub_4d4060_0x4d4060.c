// 函数名称: sub_4d4060
// 虚拟地址: 0x4d4060
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_4d4060(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_6900c8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    int32_t var_118 = eax_2
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** eax_3 = *(arg3 + 4)
    char** var_7c
    char** esi
    
    if (eax_3 != 0)
        if (eax_3[1] != 2)
            sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
                "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        var_7c = eax_3
        esi = eax_3
    else
        esi = sub_50a390(eax_3 + 2)
        var_7c = esi
    
    if (*esi == 0)
        sub_5094d0(esi, 0, 1)
    
    esi[7] = &esi[7][1]
    int32_t var_8_1 = 0
    
    if (arg2 s>= 0)
        void* eax_5 = ***esi
        
        if (arg2 s< *(eax_5 + 0x10))
            int32_t edx = *(eax_5 + 0x14)
            int32_t* esi_3 = edx + arg2 * 0x3c
            void* ecx_4 = *(arg3 + 0x2c)
            int32_t ebx_1
            
            if (ecx_4 != 0)
                ebx_1 = esi_3[0xd]
            
            float var_a8
            float var_38
            
            if (ecx_4 == 0 || ebx_1 s< 0 || ebx_1 s>= *(eax_5 + 8))
                int32_t var_94_1 = esi_3[4]
                int32_t var_90_1 = esi_3[5]
                int32_t edx_6 = esi_3[1]
                int32_t var_8c_1 = esi_3[6]
                int32_t eax_21 = esi_3[2]
                int32_t var_a4_1 = *esi_3
                int32_t ecx_15 = esi_3[3]
                var_a8 = fconvert.s((fconvert.t(esi_3[8]) + fconvert.t(esi_3[7]) + fconvert.t(esi_3[9]))
                    * fconvert.t(0.3333333432674408))
                int32_t var_a0_1 = edx_6
                int32_t var_9c_1 = eax_21
                int32_t var_98_1 = ecx_15
                __builtin_memcpy(&var_38, &var_a8, 0x20)
            else
                long double st0_1 = sub_48b8a0(&esi_3[7])
                long double temp0_1 = fconvert.t(9.9999994396249292e-11)
                st0_1 - temp0_1
                void* eax_6
                eax_6.w = (st0_1 < temp0_1 ? 1 : 0) << 8
                    | (is_unordered.t(st0_1, temp0_1) ? 1 : 0) << 0xa
                    | (st0_1 == temp0_1 ? 1 : 0) << 0xe
                bool p_1 = unimplemented  {test ah, 0x5}
                float var_108[0x10]
                float var_c8[0x4]
                float var_78[0x8]
                
                if (p_1)
                    sub_4d5d90(&var_108, edx, esi_3)
                    __builtin_memcpy(&var_78, &var_108, 0x40)
                    
                    if (ebx_1 s>= *(ecx_4 + 0x14))
                        sub_4c5870("index >= 0 && index < mSize", &data_83f3d3, 
                            "c:\ax2010\engine\xArray.h", 0xb5, "XArray<struct Mat4>::operator []")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    sub_406020(&var_108, (ebx_1 << 6) + *(ecx_4 + 0x10), &var_78)
                    __builtin_memcpy(&var_c8, &var_108, 0x40)
                    __builtin_memcpy(&var_38, sub_4d5f60(&var_c8), 0x20)
                else
                    int32_t eax_7 = *esi_3
                    int32_t ecx_5 = esi_3[1]
                    var_38 = fconvert.s(float.t(1))
                    int32_t var_34_1 = eax_7
                    int32_t var_30_1 = ecx_5
                    int32_t var_28_1 = esi_3[3]
                    int32_t var_2c_1 = esi_3[2]
                    int32_t edx_2 = esi_3[5]
                    int32_t var_24_1 = esi_3[4]
                    int32_t var_1c_1 = esi_3[6]
                    int32_t var_20_1 = edx_2
                    sub_406370(&var_c8, edx_2, &var_38)
                    __builtin_memcpy(&var_78, &var_c8, 0x40)
                    
                    if (ebx_1 s>= *(ecx_4 + 0x14))
                        sub_4c5870("index >= 0 && index < mSize", &data_83f3d3, 
                            "c:\ax2010\engine\xArray.h", 0xb5, "XArray<struct Mat4>::operator []")
                        
                        if (IsDebuggerPresent() == 1)
                            breakpoint
                        
                        sub_4c5a30()
                        noreturn
                    
                    sub_406020(&var_108, (ebx_1 << 6) + *(ecx_4 + 0x10), &var_78)
                    __builtin_memcpy(&var_c8, &var_108, 0x40)
                    __builtin_memcpy(&var_38, sub_4d5f60(&var_c8), 0x20)
                    var_38 = fconvert.s(float.t(0))
            int32_t edx_7 = *(arg3 + 8)
            int32_t ecx_16 = *(arg3 + 0xc)
            var_a8 = fconvert.s(fconvert.t(*(arg3 + 0x24)))
            int32_t var_94_2 = edx_7
            int32_t var_90_2 = ecx_16
            int32_t var_8c_2 = *(arg3 + 0x10)
            int32_t var_a4_2 = *(arg3 + 0x14)
            int32_t var_a0_2 = *(arg3 + 0x18)
            int32_t var_9c_2 = *(arg3 + 0x1c)
            int32_t var_98_2 = *(arg3 + 0x20)
            float var_58[0x8]
            __builtin_memcpy(&var_58, &var_a8, 0x20)
            sub_405f60(&var_a8, &var_58)
            __builtin_memcpy(arg4, &var_a8, 0x20)
            var_7c[7] -= 1
            fsbase->NtTib.ExceptionList = ExceptionList
            sub_5a6aba(eax_2 ^ &__saved_ebp)
            return arg4
    
    sub_4c5870(
        "hardpointIndex >= 0 && hardpointIndex < pDefStructure->pStructureImportData->hardpointCount", 
        &data_83f3d3, "Structure.cpp", 0x262, "StructureGetHardpointTransform")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
