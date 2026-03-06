// 函数名称: sub_55a090
// 虚拟地址: 0x55a090
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __thiscallsub_55a090(int32_t* arg1, int128_t* arg2, void* arg3, char arg4)
{
    // 第一条实际指令: int32_t ecx = 8
    int32_t ecx = 8
    
    if (arg4 != 0)
        ecx = 0x208
    
    int32_t* eax_1 = *(data_3079200 + 8)
    void* ebx = arg3
    
    if ((*(*eax_1 + 0x68))(eax_1, ebx, ecx, 0, 0, &arg3, 0) s< 0)
        sub_4c5680("Failed to create vertex buffer")
        sub_4c5870("Halt", &data_83f3d3, "Windows\WindowsGraphics.cpp", 0x13a, "Dx9CheckHResult")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* eax_5 = sub_55d530(&arg1[0x21])
    int32_t result = eax_5[3]
    *eax_5 = arg3
    eax_5[1] = 0
    eax_5[2].b = arg4
    
    if (arg2 != 0)
        sub_5ab990((*(*arg1 + 0x60))(result), arg2, ebx)
        (*(*arg1 + 0x68))(result, ebx)
    
    return result
}
