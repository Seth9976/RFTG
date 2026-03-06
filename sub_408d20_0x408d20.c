// 函数名称: sub_408d20
// 虚拟地址: 0x408d20
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_408d20(int32_t arg1 @ esi)
{
    // 第一条实际指令: int32_t var_8 = 0
    int32_t var_8 = 0
    int32_t* eax
    int32_t ecx
    eax, ecx = sub_4fff30(data_307b66c, 0)
    sub_505290(data_27e7a58, eax, ecx, arg1)
    void* ecx_1 = data_27e7a58
    int32_t result = *(ecx_1 + 8)
    
    if (result != arg1)
        if (result s> arg1)
            *(ecx_1 + 8) = result - 1
            result = (result - 1) * 0x214 + *ecx_1
            data_27e7a54 = result
        
        return result
    
    sub_4c5870("gGameSettingsMulti->lastActivePersona != personaIdx", &data_83f3d3, 
        "..\code\GameApp.cpp", 0x30a, "DeletePersona")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
