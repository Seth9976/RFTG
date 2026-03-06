// 函数名称: sub_53afb0
// 虚拟地址: 0x53afb0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int80_t __convention("regparm")sub_53afb0(int32_t arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: sub_53ab00(arg1)
    sub_53ab00(arg1)
    int32_t* eax
    int32_t edx
    eax, edx = sub_537110()
    
    if (eax != 0)
        int32_t ecx = data_3078834
        
        if (ecx s>= 0 && ecx s< eax[1])
            int32_t ecx_1 = ecx << 4
            float* ecx_2 = ecx_1 + *eax
            
            if (ecx_1 != neg.d(*eax))
                float eax_3
                float edx_1
                eax_3, edx_1 = sub_537720(arg1, edx, arg3)
                long double x87_r7
                
                if (data_307883c == 0)
                    float var_8_1 = fconvert.s(fconvert.t(ecx_2[1]) - fconvert.t(*ecx_2))
                    long double x87_r7_3 = fconvert.t(edx_1)
                    *ecx_2 = fconvert.s(x87_r7_3)
                    x87_r7 = x87_r7_3 + fconvert.t(var_8_1)
                else
                    x87_r7 = fconvert.t(edx_1)
                
                ecx_2[1] = fconvert.s(x87_r7)
                ecx_2[2] = fconvert.s(fconvert.t(eax_3))
                int80_t result = sub_53abd0()
                sub_5381f0()
                return result
    
    sub_4c5870("pNode", &data_83f3d3, "Windows\EditorWindow.cpp", 0x742, "EditorMoveNode")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
