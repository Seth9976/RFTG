// 函数名称: sub_561490
// 虚拟地址: 0x561490
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __fastcallsub_561490(void* arg1)
{
    // 第一条实际指令: void var_2c
    void var_2c
    int32_t eax_1 = __security_cookie ^ &var_2c
    RECT rect
    GetClientRect(*(data_3079204 + 0x2c), &rect)
    int32_t right = rect.right
    int32_t bottom = rect.bottom
    int32_t right_1 = right
    
    if (right != 0 && bottom != 0)
        right = *(arg1 + 0x18)
        
        if (right != 0)
            int32_t* eax_2 = sub_4ca0f0(right)
            right = *eax_2
            
            if (*right != right_1 || *(right + 4) != bottom)
                int32_t* eax_3 = *(arg1 + 0x10)
                (*(*eax_3 + 0x84))(eax_3, 0, 0, 0)
                void* eax_5 = sub_50ba10(*(arg1 + 0x18))
                void* eax_6 = sub_563ea0(data_3079204 + 0x40, eax_5)
                int32_t* eax_7 = *(eax_6 + 0x30)
                (*(*eax_7 + 8))(eax_7)
                int32_t* eax_8 = *(eax_6 + 0x1c)
                *(eax_6 + 0x30) = 0
                (*(*eax_8 + 8))(eax_8)
                *(eax_6 + 0x1c) = 0
                int32_t* eax_9 = *(arg1 + 0x14)
                
                if ((*(*eax_9 + 0x34))(eax_9, 0, 0, 0, 0, 0) s< 0)
                    sub_4c5870("SUCCEEDED(hr)", &data_83f3d3, "Windows\WindowsDx11.cpp", 0x5ce, 
                        "Dx11GraphicsInterface::ResizeWindow")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t* eax_12 = *(arg1 + 0x14)
                
                if ((*(*eax_12 + 0x24))(eax_12, 0, 0x89426c, eax_6 + 0x1c) s< 0)
                    sub_4c5870("SUCCEEDED(hr)", &data_83f3d3, "Windows\WindowsDx11.cpp", 0x5d1, 
                        "Dx11GraphicsInterface::ResizeWindow")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                **eax_2 = right_1
                *(*eax_2 + 4) = bottom
                int32_t* eax_17 = *(arg1 + 4)
                right = (*(*eax_17 + 0x24))(eax_17, *(eax_6 + 0x1c), 0, eax_6 + 0x30)
                
                if (right s< 0)
                    sub_4c5870("SUCCEEDED(hr)", &data_83f3d3, "Windows\WindowsDx11.cpp", 0x5d7, 
                        "Dx11GraphicsInterface::ResizeWindow")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                int32_t* edi_1 = *(arg1 + 0x1c)
                
                if (edi_1 != 0)
                    int32_t* eax_20 = sub_4ca0f0(edi_1)
                    sub_50bb10(eax_20)
                    **eax_20 = right_1
                    right = bottom
                    *(*eax_20 + 4) = right
    
    sub_5a6aba(eax_1 ^ &var_2c)
    return right
}
