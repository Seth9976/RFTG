// 函数名称: sub_5378b0
// 虚拟地址: 0x5378b0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_5378b0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* eax = data_3079208
    int32_t* eax = data_3079208
    
    if (eax != 0 && eax[1] == 0x19)
        int32_t* eax_1 = sub_466320(eax)
        
        if (eax_1 != 0)
            if (arg1 s>= 0 && arg1 s< eax_1[1])
                int32_t result = *eax_1
                *(arg1 * 0x134 + result + 8) = arg2
                return result
            
            sub_4c5870("emitterIndex >= 0 && emitterIndex < pParticleDef->mEmitterCount", &data_83f3d3, 
                "Windows\EditorWindow.cpp", 0x334, "EmitterSetIndent")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_4c5a30()
            noreturn
    
    sub_4c5870("pParticleDef", &data_83f3d3, "Windows\EditorWindow.cpp", 0x332, "EmitterSetIndent")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
