// 函数名称: sub_537540
// 虚拟地址: 0x537540
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_537540(int32_t arg1, char arg2)
{
    // 第一条实际指令: void* eax = sub_537110()
    void* eax = sub_537110()
    
    if (eax == 0)
        sub_4c5870("pTrack", &data_83f3d3, "Windows\EditorWindow.cpp", 0x2e1, "EditorGetNodePoint")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    if (arg1 s< 0 || arg1 s>= *(eax + 4))
        sub_4c5870("nodeIndex >= 0 && nodeIndex < pTrack->paramCount", &data_83f3d3, 
            "Windows\EditorWindow.cpp", 0x2e3, "EditorGetNodePoint")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    float* esi_2 = (arg1 << 4) + *eax
    float var_c = fconvert.s(fconvert.t(data_3078844))
    float var_10 = fconvert.s(fconvert.t(data_3078840) - fconvert.t(var_c))
    void var_38
    int32_t* eax_2 = sub_5374d0(&var_38)
    int32_t edi = *eax_2
    int32_t edx = eax_2[1]
    int32_t eax_4 = eax_2[3] - edx
    int32_t var_24 = edx
    int32_t result = edi + sub_685f40(float.t(eax_2[2] - edi) * fconvert.t(esi_2[2]))
    long double x87_r7_5
    
    if (arg2 == 0)
        x87_r7_5 = fconvert.t(*esi_2)
    else
        x87_r7_5 = fconvert.t(esi_2[1])
    
    sub_685f40(float.t(eax_4)
        * fconvert.t(fconvert.s(float.t(1) - (x87_r7_5 - fconvert.t(var_c)) / fconvert.t(var_10))))
    return result
}
