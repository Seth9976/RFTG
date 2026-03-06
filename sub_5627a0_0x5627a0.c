// 函数名称: sub_5627a0
// 虚拟地址: 0x5627a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int128_t*sub_5627a0(void* arg1, void* arg2, int32_t* arg3, float arg4)
{
    // 第一条实际指令: int32_t i = 0
    int32_t i = 0
    int32_t var_10 = 0
    int32_t var_c = 0
    int128_t* result = arg3[6]
    int32_t var_14 = 0
    
    if (result != 0)
        int32_t* ecx_2 = *(data_3079204 + 0x10)
        result = (*(*ecx_2 + 0x38))(ecx_2, result, 0, 4, 0, &var_14)
        
        if (result s< 0)
            sub_4c5870("SUCCEEDED(hr)", &data_83f3d3, "Windows\WindowsDx11.cpp", 0x7e1, 
                "Dx11SetRenderState")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    
    if (*(arg2 + 4) s> 0)
        void* edi_1 = arg2 + 8
        
        do
            result = sub_561930(result, arg4, edi_1, var_14)
            
            if (result.b == 0)
                result = sub_562580(edi_1, arg1, *arg3)
            
            i += 1
            edi_1 += 0x14
        while (i s< *(arg2 + 4))
    
    int32_t ecx_6 = arg3[6]
    
    if (ecx_6 == 0)
        return result
    
    int32_t* eax_4 = *(data_3079204 + 0x10)
    (*(*eax_4 + 0x3c))(eax_4, ecx_6, 0)
    int32_t eax_6 = *arg3
    
    if (eax_6 == 3)
        int32_t* eax_7 = *(data_3079204 + 0x10)
        return (*(*eax_7 + 0x1c))(eax_7, 0, 1, &arg3[6])
    
    if (eax_6 == 4)
        int32_t* eax_9 = *(data_3079204 + 0x10)
        int32_t* var_24_5 = &arg3[6]
        return (*(*eax_9 + 0x40))(eax_9)
    
    sub_4c5870("Halt", &data_83f3d3, "Windows\WindowsDx11.cpp", 0x7fe, "Dx11SetRenderState")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
