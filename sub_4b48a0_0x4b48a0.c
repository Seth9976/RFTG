// 函数名称: sub_4b48a0
// 虚拟地址: 0x4b48a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_4b48a0(int128_t* arg1, char** arg2)
{
    // 第一条实际指令: int32_t var_8 = 0xffffffff
    int32_t var_8 = 0xffffffff
    int32_t (* var_c)(void* arg1) = sub_690158
    TEB* fsbase
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
    int32_t ecx
    int32_t var_14 = ecx
    int32_t __saved_ebp
    int32_t eax_2 = __security_cookie ^ &__saved_ebp
    fsbase->NtTib.ExceptionList = &ExceptionList
    char** eax_3 = arg2
    char** ebx
    
    if (eax_3 != 0)
        if (eax_3[1] != 0x1c)
            sub_4c5870("assetPtr && assetPtr->assetType == assetType", &data_83f3d3, 
                "C:\ax2010\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
        
        arg2 = eax_3
        ebx = eax_3
    else
        ebx = sub_50a390(&eax_3[7])
        arg2 = ebx
    
    if (*ebx == 0)
        sub_5094d0(ebx, 0, 1)
    
    char* eax_5 = *ebx
    ebx[7] = &ebx[7][1]
    int32_t* esi = *eax_5
    int128_t* result = arg1
    int32_t var_8_1 = 0
    int32_t ecx_2 = *esi
    
    if (ecx_2 != *(result + 0x18))
        sub_4c5870("pNetImportData->num_inputs == learn->num_inputs", &data_83f3d3, 
            "..\code\RTFGNeuralNetImport.cpp", 0x9d, "NeuralNetLoadWeights")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t edx = esi[1]
    
    if (edx != *(result + 0x1c))
        sub_4c5870("pNetImportData->num_hidden == learn->num_hidden", &data_83f3d3, 
            "..\code\RTFGNeuralNetImport.cpp", 0x9e, "NeuralNetLoadWeights")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (esi[2] != result[2].d)
        sub_4c5870("pNetImportData->num_outputs == learn->num_output", &data_83f3d3, 
            "..\code\RTFGNeuralNetImport.cpp", 0x9f, "NeuralNetLoadWeights")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (ecx_2 + 1 s> 0)
        int32_t ecx_4 = edx << 3
        int32_t ebx_1 = 0
        int32_t i = 0
        
        do
            sub_5ab990(*(*(result + 0x24) + (i << 2)), esi[3] + ebx_1, ecx_4, eax_2)
            ebx_1 += ecx_4
            result = arg1
            i += 1
        while (i s< *esi + 1)
        
        ebx = arg2
    
    int32_t edi_1 = 0
    
    if (esi[1] + 1 s> 0)
        void* ecx_12 = esi[2] * 8
        void* ebx_2 = nullptr
        
        while (true)
            result = sub_5ab990(*(*(result + 0x2c) + (edi_1 << 2)), esi[5] + ebx_2, ecx_12, eax_2)
            ebx_2 += ecx_12
            edi_1 += 1
            
            if (edi_1 s>= esi[1] + 1)
                break
            
            result = arg1
        
        ebx = arg2
    
    ebx[7] -= 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return result
}
