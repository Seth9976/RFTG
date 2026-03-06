// 函数名称: sub_529040
// 虚拟地址: 0x529040
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_529040(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t* arg5, int32_t* arg6)
{
    // 第一条实际指令: int32_t edx = 0
    int32_t edx = 0
    
    if (arg1 s> 0)
        int32_t* eax = arg5
        int32_t* edi_2 = arg3 - eax
        
        do
            int32_t ecx = *(edi_2 + eax)
            
            if (ecx s< 0)
                sub_4c5870("index >= 0", &data_83f3d3, "UI2.cpp", 0xeb7, "UI2GetIndex")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if (ecx s>= data_30d94f0)
                sub_4c5870("index < gUI2Editor.numDisplayEls", &data_83f3d3, "UI2.cpp", 0xeb8, 
                    "UI2GetIndex")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            arg3 = *(*((ecx << 3) + &data_30d74f0) + 0x19dc)
            *eax = arg3
            edx += 1
            eax = &eax[1]
        while (edx s< arg1)
    
    *arg6 = arg1
    char var_8 = 0
    void* eax_1 = sub_530500(arg3, arg4)
    int32_t ecx_2 = *arg6
    int32_t edx_2 = *(eax_1 + 0x19dc)
    int32_t result = 0
    
    if (ecx_2 s> 0)
        do
            if (arg5[result] == edx_2)
                var_8 = 1
                break
            
            result += 1
        while (result s< ecx_2)
    
    int32_t i = 0
    
    if (*(eax_1 + 0x19d0) s> 0)
        do
            result, edx_2 = sub_528fa0(sub_525900(i, edx_2, eax_1), arg5, arg6, var_8)
            i += 1
        while (i s< *(eax_1 + 0x19d0))
    
    return result
}
