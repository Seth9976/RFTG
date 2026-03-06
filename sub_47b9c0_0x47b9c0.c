// 函数名称: sub_47b9c0
// 虚拟地址: 0x47b9c0
// 源二进制: E:/torrent/Cursor/Race/steamapps/common/Race for the Galaxy/Race.exe.bndb

int32_t __convention("regparm")sub_47b9c0(int32_t arg1, void* arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t result = arg4
    int32_t result = arg4
    int32_t edi = 0
    
    if (result s> 0)
        void* esi_1 = arg2 + 8
        
        do
            int32_t edx = *(arg3 + (edi << 2))
            *(esi_1 - 8) = edx
            *(esi_1 - 4) = 2
            *esi_1 = edx * 0x32c + arg1 + 0xc
            
            if (edx u> 0x1c)
                sub_4c5870("Halt", &data_83f3d3, "..\code\RftGVR.cpp", 0xa2b, "ClickStateAlloc")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_4c5a30()
                noreturn
            
            switch (edx)
                case 0
                    *(edx * 0x32c + arg1 + 0xc) = "mouse left"
                case 1
                    *(edx * 0x32c + arg1 + 0xc) = "mouse right"
                case 2
                    *(edx * 0x32c + arg1 + 0xc) = "keyboard space"
                case 3
                    *(edx * 0x32c + arg1 + 0xc) = "keyboard enter"
                case 4
                    *(edx * 0x32c + arg1 + 0xc) = "keyboard esc"
                case 5
                    *(edx * 0x32c + arg1 + 0xc) = "keyboard tab"
                case 6
                    *(edx * 0x32c + arg1 + 0xc) = "keyboard left"
                case 7
                    *(edx * 0x32c + arg1 + 0xc) = "keyboard right"
                case 8
                    *(edx * 0x32c + arg1 + 0xc) = "gamepad a"
                case 9
                    *(edx * 0x32c + arg1 + 0xc) = "gamepad b"
                case 0xa
                    *(edx * 0x32c + arg1 + 0xc) = "gamepad x"
                case 0xb
                    *(edx * 0x32c + arg1 + 0xc) = "gamepad y"
                case 0xc
                    *(edx * 0x32c + arg1 + 0xc) = "gamepad back"
                case 0xd
                    *(edx * 0x32c + arg1 + 0xc) = "gamepad select"
                case 0xe
                    *(edx * 0x32c + arg1 + 0xc) = "gamepad left dpad"
                case 0xf
                    *(edx * 0x32c + arg1 + 0xc) = "gamepad left shoulder"
                case 0x10
                    *(edx * 0x32c + arg1 + 0xc) = "gamepad right dpad"
                case 0x11
                    *(edx * 0x32c + arg1 + 0xc) = "gamepad right shoulder"
                case 0x12
                    *(edx * 0x32c + arg1 + 0xc) = "oc remote enter"
                case 0x13
                    *(edx * 0x32c + arg1 + 0xc) = "oc remote back"
                case 0x14
                    *(edx * 0x32c + arg1 + 0xc) = "oc remote up"
                case 0x15
                    *(edx * 0x32c + arg1 + 0xc) = "oc remote down"
                case 0x16
                    *(edx * 0x32c + arg1 + 0xc) = "oc remote left"
                case 0x17
                    *(edx * 0x32c + arg1 + 0xc) = "oc remote right"
                case 0x18
                    *(edx * 0x32c + arg1 + 0xc) = "gear remote trigger"
                case 0x19
                    *(edx * 0x32c + arg1 + 0xc) = "gear remote touchpad"
                case 0x1a
                    *(edx * 0x32c + arg1 + 0xc) = "gear remote back"
                case 0x1b
                    *(edx * 0x32c + arg1 + 0xc) = "gear touchpad"
                case 0x1c
                    *(edx * 0x32c + arg1 + 0xc) = "gear back"
            
            result = arg4
            edi += 1
            esi_1 += 0xc
        while (edi s< result)
    
    return result
}
