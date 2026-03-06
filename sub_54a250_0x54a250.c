// 函数名称: sub_54a250
// 虚拟地址: 0x54a250
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __thiscallsub_54a250(void* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t esi_1 = *sub_54b850(arg1 + 0x4240, arg2)
    int32_t esi_1 = *sub_54b850(arg1 + 0x4240, arg2)
    void* eax_1 = data_307882c
    
    if (*(eax_1 + 0x408c) != 0)
        *(eax_1 + 0x408c) = 0
        data_3079e24(0)
        void* eax_2 = data_27e7fe4
        *(eax_2 + 0x10) += 1
    
    data_307943c(0x8893, esi_1)
    data_3079a10(0x8893, 0, arg3)
    char result = data_3079480(0x8893)
    
    if (result != 0)
        return result
    
    sub_4c5870("result", &data_83f3d3, "OpenGLGraphics.cpp", 0x144c, 
        "OpenGLInterface::UnlockIndexBuffer")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
