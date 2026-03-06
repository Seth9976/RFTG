// 函数名称: sub_547b50
// 虚拟地址: 0x547b50
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t*sub_547b50(void* arg1, void* arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    int32_t eax_1 = *(*(arg1 + 0xc) + 0x10)
    
    if (eax_1 == 1)
        return sub_544210(*(arg1 + 4))
    
    if (eax_1 == 4)
        return sub_544150(*(arg1 + 4))
    
    if (eax_1 != 0xf)
        sub_4c5870("Halt", &data_83f3d3, "OpenGLGraphics.cpp", 0xcfb, "GLGraphicsSetGenericRenderState")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* result = *(arg1 + 0x10)
    int32_t* result_1 = result
    
    if (result != 0)
        void* eax_6 = sub_50ba10(result)
        result = sub_54b850(data_307882c + 0x4240, eax_6)
        
        if (result[4] == 0)
            int32_t ebx_1 = *(arg1 + 8)
            bool cond:1_1 = *(*sub_4ca0f0(result_1) + 0x18) != 1
            uint32_t esi_2 = *result
            int32_t edx_2
            
            if (not(cond:1_1))
                edx_2 = sub_544060(ebx_1, esi_2)
            else if (*(result + 0x13f) == 0)
                edx_2 = sub_543f60(ebx_1, esi_2)
            else
                edx_2 = sub_543fe0(ebx_1, esi_2)
            
            int32_t var_18_2 = ebx_1
            int32_t edx_3 = sub_547870(arg2, result, edx_2)
            int32_t var_1c_1 = ebx_1
            return sub_5447c0(*(arg1 + 4), edx_3)
    
    return result
}
