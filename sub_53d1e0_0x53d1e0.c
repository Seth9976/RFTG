// 函数名称: sub_53d1e0
// 虚拟地址: 0x53d1e0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_53d1e0(char arg1)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_6931c8
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    int32_t* result = data_3079208
    
    if (result != 0 && result[1] == 0x19)
        result = sub_466320(result)
        
        if (result != 0)
            LRESULT eax_5
            int32_t ecx_1
            eax_5, ecx_1 = SendMessageA(GetDlgItem(data_3078830, 0x76), 0x188, 0, 0)
            int32_t ebx_1
            WPARAM esi_2
            
            if (eax_5 != 0xffffffff)
                int32_t eax_6
                eax_6, ecx_1 = sub_537810(eax_5)
                
                if (arg1 == 0)
                    int32_t eax_8
                    eax_8, ecx_1 = sub_537960(eax_5)
                    esi_2 = eax_8 + eax_5 + 1
                    ebx_1 = eax_6
                else
                    esi_2 = eax_5 + 1
                    ebx_1 = eax_6 + 1
            else
                esi_2 = result[1]
                ebx_1 = 0
            
            int32_t var_30_2 = ecx_1
            int32_t* eax_10
            int32_t edx_1
            eax_10, edx_1 = sub_4fff30(data_30d7434, 0)
            int32_t edx_2 = sub_505030(eax_10, edx_1, result, eax_10, esi_2)
            
            if (esi_2 u> 0xff)
                sub_4c5870("emitterIndex >= 0 && emitterIndex < MAX_EMITTERS", &data_83f3d3, 
                    "Windows\EditorWindow.cpp", 0x941, "ToolDataAddItem")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (0xff - esi_2 s> 0)
                edx_2 = sub_5a6c10((esi_2 << 3) + &data_307887c, (esi_2 << 3) + &data_3078874, 
                    (0xff - esi_2) << 3, eax_2)
            
            int32_t var_2c_4 = ebx_1
            *((esi_2 << 3) + &data_3078874) = esi_2 + 0x64
            *((esi_2 << 3) + &data_3078878) = 0
            sub_5378b0(esi_2, edx_2)
            
            if (esi_2 s>= result[1])
                sub_4c5870("insertIndex >= 0 && insertIndex < pParticleDef->mEmitterCount", 
                    &data_83f3d3, "Windows\EditorWindow.cpp", 0xb2a, "EmitterAdd")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            int32_t* edi_6 = esi_2 * 0x134 + *result
            char* var_18
            int32_t ecx_5
            void* edx_5
            ecx_5, edx_5 = sub_53d0a0(&var_18, "Particle ")
            int32_t var_8_1 = 0
            char* const eax_14 = var_18
            
            if (eax_14 == 0)
                eax_14 = &data_83f3d3
            
            char* const var_2c_5 = eax_14
            int32_t var_30_6 = 1
            char* ecx_6 = sub_530b60(edi_6, edx_5, ecx_5, &data_8c35ec)
            void* eax_16 = data_3079208
            
            if (eax_16 != 0)
                int32_t eax_17 = *(eax_16 + 4)
                
                if (eax_17 == 0x19)
                    int32_t var_2c_6 = 0xffffffff
                    ecx_6 = sub_538a80(esi_2)
                else if (eax_17 == 0x1b)
                    ecx_6 = sub_539d30(esi_2)
            
            sub_536c00(ecx_6)
            sub_56e600()
            sub_56e480()
            int32_t var_8_2 = 0xffffffff
            result = sub_4c43d0(&var_18)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
