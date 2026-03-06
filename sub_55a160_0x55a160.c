// 函数名称: sub_55a160
// 虚拟地址: 0x55a160
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __thiscallsub_55a160(int32_t* arg1, int128_t* arg2, void* arg3, char arg4, char arg5)
{
    // 第一条实际指令: int32_t edx = 0x65
    int32_t edx = 0x65
    
    if (arg4 != 0)
        edx = 0x66
    
    int32_t ecx = 8
    
    if (arg5 != 0)
        ecx = 0x208
    
    int32_t* eax_1 = *(data_3079200 + 8)
    
    if ((*(*eax_1 + 0x6c))(eax_1, arg3, ecx, edx, 0, &arg4, 0) s< 0)
        sub_4c5680("Failed to create index buffer")
        sub_4c5870("Halt", &data_83f3d3, "Windows\WindowsGraphics.cpp", 0x13a, "Dx9CheckHResult")
        
        if (IsDebuggerPresent() != 1)
            sub_4c5a30()
            noreturn
        
        breakpoint
    
    int32_t* eax_4 = sub_55d530(&arg1[0x21])
    int32_t* ecx_2
    ecx_2.b = arg5
    int32_t result = eax_4[3]
    *eax_4 = arg4.d
    eax_4[1] = 1
    eax_4[2].b = ecx_2.b
    
    if (arg2 != 0)
        sub_5ab990((*(*arg1 + 0x70))(result), arg2, arg3)
        (*(*arg1 + 0x74))(result, arg3)
    
    return result
}
