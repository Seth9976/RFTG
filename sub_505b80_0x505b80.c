// 函数名称: sub_505b80
// 虚拟地址: 0x505b80
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __stdcallsub_505b80(int32_t* arg1 @ esi, float arg2, int32_t arg3)
{
    // 第一条实际指令: if (*(arg1 + 0x52) != 0)
    if (*(arg1 + 0x52) != 0)
        int32_t var_8 = arg3
        int32_t result
        int80_t st0
        st0, result = sub_505940(arg1, arg2)
        
        if (result != arg1[1])
            arg1[1] = result
            arg1[2] = fconvert.s(float.t(0))
        
        return result
    
    sub_4c5870("mIsDownSelecting", &data_83f3d3, "UITextBox.cpp", 0x41, "UITextBox::UpdateDragging")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
