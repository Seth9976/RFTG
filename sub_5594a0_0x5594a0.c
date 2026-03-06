// 函数名称: sub_5594a0
// 虚拟地址: 0x5594a0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __stdcallsub_5594a0(void* arg1, float arg2)
{
    // 第一条实际指令: int32_t* esi = *(arg1 + 8)
    int32_t* esi = *(arg1 + 8)
    int32_t ecx
    int32_t var_10 = ecx
    int32_t result = (*(*esi + 0x3c))(esi, sub_558be0(fconvert.s(fconvert.t(arg2))))
    
    if (result == 0)
        return result
    
    sub_4c5870("hr == S_OK", &data_83f3d3, "Windows\WindowsSound.cpp", 0x220, 
        "WindowsSoundInterface::SoundSetVolume")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
