// 函数名称: sub_507aa0
// 虚拟地址: 0x507aa0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_507aa0(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t eax = *((arg1 << 2) + &data_26a453c)
    int32_t eax = *((arg1 << 2) + &data_26a453c)
    data_26a4564 = eax
    
    if (arg2 == 1)
        data_26a4564 = 0x3e8
    else if (eax != 0 && eax != 0x3e8)
        if (eax == 1)
            if (sub_507140() == 0)
                return sub_4e5930(data_26a4518, *((data_26a4524 << 2) + &data_26a4510))
            
            int32_t eax_5 = data_26a4524
            return sub_4e5930(*((eax_5 << 2) + &data_26a4520), *((eax_5 << 2) + &data_26a4508))
        
        sub_4c5870("Halt", &data_83f3d3, "VR.cpp", 0x10d, "VRSetRenderTargetForEye")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_4c5a30()
        noreturn
    
    void* eax_2
    
    if (*(data_27e7fd0 + 0x1c) != 0 && data_307881f == 0)
        eax_2 = data_27e7fcc
    
    int32_t ecx_3
    int32_t edx
    
    if (*(data_27e7fd0 + 0x1c) != 0
            && (data_307881f != 0 || eax_2 == 0 || ((*(eax_2 + 0x3c) u>> 0xd).b & 1) == 0))
        int32_t eax_3 = data_26a4524
        ecx_3 = *((eax_3 << 2) + &data_26a451c)
        edx = *((eax_3 << 2) + &data_26a4504)
    else
        ecx_3 = data_26a4514
        edx = *((data_26a4524 << 2) + &data_26a450c)
    
    void* eax_9 = data_27e7fe4
    *(eax_9 + 0x244) = 0
    *(eax_9 + 0xe8) = 2
    *(eax_9 + 0xf8) = edx
    *(eax_9 + 0xfc) = ecx_3
    *(eax_9 + 0x100) = 1
    return sub_4e57f0(edx, ecx_3, 1)
}
