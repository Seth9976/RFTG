// 函数名称: sub_409c90
// 虚拟地址: 0x409c90
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_tsub_409c90()
{
    // 第一条实际指令: int32_t edx
    int32_t edx
    
    if (data_315f8d8 == 0)
        char eax_1
        eax_1, edx = sub_40a160("started")
        data_315f8d8 = eax_1
    
    sub_4075c0()
    void* eax_2 = data_27e7a40
    int32_t ecx = 0xffffffff
    
    if (eax_2 != 0 && *(eax_2 + 0x2c4960) == 2)
        ecx = *(*(eax_2 + 0x2c495c) * 0x1f8 + eax_2 + 0xcac)
    
    sub_4079f0(eax_2, edx, &data_27e7a28, ecx)
    sub_407670()
    int32_t result_1 = data_27c05f4
    int32_t result = data_27c05e8
    
    if (result == result_1)
        goto label_409d75
    
    while (true)
        if (result != 4)
            if (result != 1)
                if (result == 2 || result == 3)
                    sub_4122f0()
                    result_1 = data_27c05f4
            else if (data_30785cc != 5)
                if (data_26a4601 != result.b)
                    sub_4c5870("gVR.disableHeadTracking == true", &data_83f3d3, 
                        "..\code\LoadingScreen.cpp", 0x55, "LoadingScreenHide")
                    
                    if (IsDebuggerPresent() == 1)
                        breakpoint
                    
                    sub_4c5a30()
                    noreturn
                
                data_26a4601 = 0
        
        result = result_1
        data_27c05e8 = result
        int16_t top
        
        if (result_1 == 4)
            sub_4749d0()
            top -= 1
            unimplemented  {call 0x4749d0}
            result = data_27c05e8
        else if (result_1 == 1)
            sub_4121d0()
            result = data_27c05e8
        else if (result_1 == 2 || result_1 == 3)
            sub_412280()
            result = data_27c05e8
        
    label_409d75:
        
        if (result == 1 || result == 2 || result == 3)
            void* ecx_3 = data_27e7a70
            int32_t eax_5 = *(ecx_3 + 0x64)
            
            if (eax_5 == 1)
                sub_4124b0(ecx_3)
                *(data_27e7a70 + 0x64) = 2
            else if (eax_5 == 2)
                sub_4125f0()
                *(data_27e7a70 + 0x64) = 3
            
            sub_4123d0()
            sub_4c6110(1)
        else if (result == 4)
            sub_4753f0()
            unimplemented  {call 0x4753f0}
            sub_4075c0()
            sub_402630(data_307d9c0)
            top -= 2
            unimplemented  {call 0x402630}
            sub_407670()
        else if (result == 7)
            sub_4075c0()
            sub_4033f0()
            unimplemented  {call 0x4033f0}
            sub_402630(sub_48b7e0())
            top -= 2
            unimplemented  {call 0x402630}
            sub_407670()
            sub_488ed0()
            sub_4c8c10()
            sub_407730()
            sub_4b6810()
            sub_4077f0()
        else if (result == 8)
            sub_401470()
        else if (result != 6)
            if (result != 5)
                break
            
            sub_4075c0()
            sub_4035e0()
            sub_402630(0)
            top -= 1
            unimplemented  {call 0x402630}
            sub_407670()
            sub_4c8c10()
            sub_407730()
            sub_4b6810()
            sub_4077f0()
        else
            sub_407730()
            sub_4b6810()
            sub_4077f0()
        
        if (*(data_27e7fd0 + 0x27) != 0)
            void* eax_7 = data_27e7fcc
            
            if (eax_7 == 0)
                sub_4c5870("gpGameData", &data_83f3d3, "c:\ax2010\engine\Game.h", 0x59, "GetGameData")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            if ((*(eax_7 + 0x3c) & 0x200) != 0 || data_27e7bc1 != 0)
                void var_18
                char eax_8 = sub_4c6230(&var_18)
                unimplemented  {call 0x4c6230}
                
                if (eax_8 != 0)
                    void var_10
                    char eax_9 = sub_4c6230(&var_10)
                    unimplemented  {call 0x4c6230}
                    
                    if (eax_9 != 0)
                        SetCursor(nullptr)
        
        result = data_27c05e8
        result_1 = data_27c05f4
        
        if (result == result_1)
            return result
    
    sub_4c5870("Halt", &data_83f3d3, "..\code\GameApp.cpp", 0x56a, "GameAppUpdate")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_4c5a30()
    noreturn
}
